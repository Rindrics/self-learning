import Test.Hspec (Spec, hspec, describe, it, shouldBe)
import Test.Hspec.Expectations
import MyLib (parseToken)

main :: IO ()
main = hspec spec

spec :: Spec
spec = describe "parseToken works" $ do
    it "returns lhs" $ fst (parseToken "1 2 +" "") `shouldBe` "1"
    it "returns rhs" $ fst (parseToken "2 +" "") `shouldBe` "2"
    it "returns operator" $ fst (parseToken "+" "") `shouldBe` "+"
