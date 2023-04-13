module Main where

--import qualified MyLib (parseStringToTokenList)
import qualified MyLib (parseStringToTokenList, calculateRPN)

main :: IO ()
main = do
  line <- getLine
  -- print $ reverse $ MyLib.parseStringToTokenList line [] []
  print $ MyLib.calculateRPN (reverse $ MyLib.parseStringToTokenList line [] []) []
