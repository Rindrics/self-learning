import Test.Hspec (Spec, hspec, describe, it, shouldBe)
import Test.Hspec.Expectations
import MyLib (Stack(..), parseToken, push, pop)

main :: IO ()
main = hspec $ do

  describe "parseToken" $ do
      it "returns lhs" $ fst (parseToken "1 2 +" "") `shouldBe` "1"
      it "returns rhs" $ fst (parseToken "2 +" "") `shouldBe` "2"
      it "returns operator" $ fst (parseToken "+" "") `shouldBe` "+"

  describe "stack" $ do
      it "can push" $ push 1 (Push 2 (Push 3 EmptyStack)) `shouldBe` Push 1 (Push 2 (Push 3 EmptyStack))
      it "can push (start from empty)" $ push 1 EmptyStack `shouldBe` Push 1 EmptyStack
      it "can pop (3 elements)" $ pop (push 1 (Push 2 (Push 3 EmptyStack))) `shouldBe`  Just (1, Push 2 (Push 3 EmptyStack))
      it "can pop (1 element)" $ pop (push 1  EmptyStack) `shouldBe`  Just (1, EmptyStack)
      it "can't pop (no element)" $ pop EmptyStack `shouldBe` (Nothing :: Maybe (Int, Stack Int))
