maclaurin :: Double -> Double
maclaurin x =
  let s = [1, x] ++ zipWith (\term i -> term * x / fromIntegral i) s [2..] -- Add more terms as needed
      f y = abs y >= 1e-6
  in
    sum (takeWhile f s)


smallestMultiple :: Integer -> Integer
smallestMultiple n = go 1
  where
    go x
      | mod x n == 0 = x
      | otherwise = go (x * 10 + 1)

digits :: Integer -> Integer
digits n = fromIntegral $ length $ show $ smallestMultiple n


chain :: Integer -> [Integer]
chain 1 = [1]
chain n
      | even n = n:chain (n `div` 2)
      | odd n = n:chain (n*3 + 1)

isJumper :: [Int] -> Bool
isJumper [] = True
isJumper [_] = True
isJumper (x:xs) = all (\y -> abs (x - y) `elem` [0..length xs]) xs