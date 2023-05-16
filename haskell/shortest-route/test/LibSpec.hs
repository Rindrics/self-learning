module LibSpec (spec) where

import Test.Hspec ( describe
                  , it
                  , shouldBe
                  , Spec
                  , Expectation
                  )

import Lib ( groupsOf
           )

spec :: Spec
spec = do
   describe "test groupsOf" $ do
    it "groups list of sublists of length 3" $ do
      groupsOf 3 [1, 2, 3, 4, 5, 6] `shouldBe` [[1, 2, 3], [4, 5, 6]]
