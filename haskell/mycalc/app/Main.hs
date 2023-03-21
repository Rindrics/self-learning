module Main where

import qualified MyLib (parseStringToTokenList)

main :: IO ()
main = do
  line <- getLine
  print $ MyLib.parseStringToTokenList line "" []
