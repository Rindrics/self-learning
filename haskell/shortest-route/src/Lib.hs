module Lib
    ( someFunc
    , Section(..)
    ,  RoadSystem
    ) where

data Section = Section { getA :: Int, getB :: Int, getC :: Int}
  deriving (Show)

type RoadSystem = [Section]

someFunc :: IO ()
someFunc = putStrLn "someFunc"
