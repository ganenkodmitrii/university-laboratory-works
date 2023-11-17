safeTailExpressCondition :: [a] -> [a]
safeTailExpressCondition xs = if null xs then [] else tail xs

safeTailProtectedEquations :: [a] -> [a]
safeTailProtectedEquations xs
    | null xs = []
    | otherwise = tail xs


safeTailPatternMatching :: [a] -> [a]
safeTailPatternMatching [] = []
safeTailPatternMatching (_:xs) = xs

subList :: Eq a => [a] -> [a] -> Bool
subList xs ys = and [x `elem` ys | x <- xs]

polynomialMultiplication :: [Int] -> [Int] -> [Int]
polynomialMultiplication [] _ = []
polynomialMultiplication _ [] = []
polynomialMultiplication (x:xs) ys = add (map (*x) ys) (0 : polynomialMultiplication xs ys)
  where
    add [] ys = ys
    add xs [] = xs
    add (x:xs) (y:ys) = x + y : add xs ys
	
pascal :: [Int] -> [[Int]]
pascal row = row : pascal (1 : zipWith (+) row (tail row ++ [1]))