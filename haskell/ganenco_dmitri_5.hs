import Data.Char

pythagoreans :: Int -> [(Int, Int, Int)]
pythagoreans limit = [(x, y, z) | x <- [1..limit], y <- [1..limit], z <- [1..limit], x^2 + y^2 == z^2]


perfects :: Int -> [Int]
perfects limit = [n | n <- [2..limit], n == sum (filter (\x -> n `mod` x == 0) [1..(n-1)])]

encode :: Int -> String -> String
encode offset msg = map (\c -> chr $ ord c + offset) msg

decode :: Int -> String -> String
decode shift msg = encode (negate shift) msg