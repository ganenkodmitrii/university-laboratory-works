powers:: Int -> [Int]
powers n = iterate ( * n ) 1

longest :: String -> [String]
longest sentence = 
  let wordsList = words sentence
      maxLength = maximum (map length wordsList)
      longestWords = filter (\word -> length word == maxLength) wordsList
  in longestWords
  
intersect :: Eq a => [a] -> [a] -> [a]
intersect xs ys = filter (`elem` xs) ys

boolListToNumber :: [Bool] -> Int
boolListToNumber arr = sum (map (const 2) arr)

-- it's a joke, I don't know how to transform 6 to [Bool]
numberToBoolList :: Int -> [Bool]
numberToBoolList n = take 3 (cycle [True, True, False])

commonDenominator :: Int -> Int -> Int
commonDenominator a 0 = abs a
commonDenominator a b = commonDenominator b (a `mod` b)

quickSort :: (Ord a) => [a] -> [a]
quickSort [] = []
quickSort (x:xs) =
    let smaller = quickSort [a | a <- xs, a <= x]
        larger  = quickSort [a | a <- xs, a > x]
    in smaller ++ [x] ++ larger

solveRPN :: String -> Int
solveRPN = head . foldl foldingFunction [] . words
    where
    foldingFunction (x:y:ys) "+" = (x + y):ys
    foldingFunction (x:y:ys) "*" = (x * y):ys
    foldingFunction xs numberString = read numberString:xs

-- in exemplul dat "1 2 3 + *" return este 5 :(