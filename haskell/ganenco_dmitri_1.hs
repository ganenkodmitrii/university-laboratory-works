addElementToEndOfList :: [Int] -> Int -> [Int]
addElementToEndOfList y a = y ++ [a]

getLastElement1 ::[Int] -> Int
getLastElement1 a = head (reverse a)

getLastElement2 ::[Int] -> Int
getLastElement2 a = reverse a !! 0

removeLastElement1 ::[Int] -> [Int]
removeLastElement1 a = reverse (tail (reverse a))


removeLastElement2 ::[Int] -> [Int]
removeLastElement2 a = reverse (drop 1 (reverse a))


fib ::Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)
fibonacci ::Int -> [Int]
fibonacci n = take n (map fib [0 ..])
