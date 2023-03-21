module MyLib
(
  -- Stack(..),
  parseStringToTokenList,
  -- push,
  -- pop
) where

-- import Data.Char (isDigit)

type StringToConsume = String
type Accumulator = String
type Token = String

-- Return list of tokens
parseStringToTokenList :: StringToConsume -> Accumulator -> [Token] -> [Token]
parseStringToTokenList "" reversedToken tokenList = reverse reversedToken:tokenList
parseStringToTokenList (' ':xs) reversedToken tokenList = parseStringToTokenList xs "" (reverse reversedToken:tokenList)
parseStringToTokenList (x:xs) accumulator tokenList = parseStringToTokenList xs (x:accumulator) tokenList

-- data Stack a = EmptyStack | Push a (Stack a)
-- instance Show a => Show (Stack a) where
--   show EmptyStack = "EmptyStack"
--   show (Push x xs) = "Push " ++ show x ++ " (" ++ show xs ++ ")"
-- instance Eq a => Eq (Stack a) where
--   EmptyStack == EmptyStack = True
--   (Push a as) == (Push b bs) = a == b && as == bs
--   _ == _ = False


-- push :: a -> Stack a -> Stack a
-- push a b = Push a b

-- pop :: Stack a -> Maybe (a, Stack a)
-- pop EmptyStack = Nothing
-- pop (Push x xs) = Just (x, xs)

-- calculate :: String -> Stack Double -> Double
-- calculate [] (Push x EmptyStack) = x
-- calculate [] _ = error "invalid expression"
-- calculate (x:xs) stack
--   | isDigit x = calculate xs (Push (read [x]) stack)
--   | _ = calc x stack
--   where calc :: (Num a => a -> a -> a) -> Stack Double -> Double
--         calc x stack = (x) (pop Stack) (pop Stack)
