import Test.Hspec (Spec, hspec, describe, it, shouldBe)
import Test.Hspec.Expectations
import MyLib (parseToken, push, pop)

main :: IO ()
main = hspec $ do

  describe "parseToken" $ do
      it "returns lhs" $ fst (parseToken "1 2 +" "") `shouldBe` "1"
      it "returns rhs" $ fst (parseToken "2 +" "") `shouldBe` "2"
      it "returns operator" $ fst (parseToken "+" "") `shouldBe` "+"

  describe "stack" $ do
      it "can push" $ push 1 [2, 3] `shouldBe` [1, 2, 3]
      it "can push (start from empty)" $ push 1 [] `shouldBe` [1]
      it "can pop (3 elements)" $ pop [1, 2, 3] `shouldBe` Just (1, [2, 3])
      it "can pop (1 element)" $ pop [3] `shouldBe` Just (3, [])
      it "can't pop (no element)" $ pop [] `shouldBe` (Nothing :: Maybe (Int, [Int]))
