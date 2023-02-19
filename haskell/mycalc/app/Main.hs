module Main where

import qualified MyLib (parseToken)

main :: IO ()
main = do
  line <- getLine
  putStrLn $ fst $ MyLib.parseToken line ""
