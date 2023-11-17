-- [’a’, ’b’, ’c’] :: [Char]
-- (’a’, ’b’, ’c’) :: (Char,Char,Char)
-- [(False, ’O’), (True, ’1’)] :: [(Bool, Char)]
-- ([False, True ], [’0’, ’1’]):: ([Bool], [Char])
-- [tail , init , reverse ] :: [ [a] -> [a] ]

getLengthList ::[a] -> Int
getLengthList arr = sum (map (const 1) arr)

isPalindrome :: String -> Bool
isPalindrome str = str == reverse str

block :: Int -> [a] -> [[a]]
block _ [] = []
block n xs | n > 0 = take n xs : block n (drop n xs)
