import Test.Hspec (Spec, hspec, describe, it, shouldBe)
import Test.Hspec.Expectations
import MyLib (parseToken)

main :: IO ()
main = hspec spec

spec :: Spec
spec = describe "parseToken works" $ do
    it "with space" $ fst (parseToken "1 2 +" "") `shouldBe` "1"
