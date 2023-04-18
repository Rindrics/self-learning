module Main where

import qualified MyLib (calculateRPN)

main :: IO ()
main = do
  line <- getLine
  print $ MyLib.calculateRPN line
