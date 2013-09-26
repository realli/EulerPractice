import Data.Function(on)
import Data.List

maxProduct :: Int -> Int
maxProduct 2 = 2 
maxProduct n = productAll $ foldl helper [] [2..n]
                where helper ls num = merge ls . group $ allPrimes num
                      productAll ls = product . map (\(x,y) -> x^y) $ ls
allPrimes :: Int -> [Int]
allPrimes 1 = []
allPrimes n = go [2..n] n
        where go _ 1 = []
              go (x:xs) num = if num `mod` x == 0 then x:(go [2..] (num `div` x)) else go xs num
            

merge :: [(Int, Int)] -> [[Int]] -> [(Int, Int)]
merge ls ll = foldl go ls ll
            where go acc l@(x:xs) = case (lookup x acc) of
                                        Nothing   -> (x, listNum):acc
                                        (Just n) -> if n >= listNum then acc else unionBy ((==) `on` fst) [(x, listNum)] acc
                        where listNum = length l

maxProduct' :: Int -> Int
maxProduct' n = foldl lcm 1 [1..n]
                    