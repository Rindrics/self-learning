module Lib
    ( someFunc
    , Section(..)
    ) where

data Section = Section { getA :: Int, getB :: Int, getC :: Int}
  deriving (Show)

someFunc :: IO ()
someFunc = putStrLn "someFunc"
