module Main where

import qualified MyLib (parseStringToTokenList, calculateRPN)

main :: IO ()
main = do
  line <- getLine
  print $ MyLib.calculateRPN (reverse $ MyLib.parseStringToTokenList line [] []) []
