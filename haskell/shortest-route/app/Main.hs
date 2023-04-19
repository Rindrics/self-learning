module Main (main) where

import Lib (RoadSystem, Section(..))

main :: IO ()
main = do
  let heathrowToLondon :: RoadSystem
      heathrowToLondon = [ Section 50 10 30
                         , Section 5 90 20
                         , Section 40 2 25
                         , Section 10 8 0
                         ]
  print heathrowToLondon
