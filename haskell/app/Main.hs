module Main where

import qualified MyLib (calculate)

main :: IO ()
main = do
  line <- getLine
  putStrLn $ MyLib.calculate line
