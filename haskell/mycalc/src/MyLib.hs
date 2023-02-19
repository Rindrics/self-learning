module MyLib
(
  Stack(..),
  parseToken,
  push,
  pop
) where

parseToken :: String -> String -> (String, String)
parseToken (' ':_) frag = (frag, "")
parseToken [] frag = (frag, "")
parseToken (x:xs) frag = parseToken xs (frag ++ [x])

-- rpn :: String -> [String] -> [String]
-- rpn x stack = push x stack

data Stack a = EmptyStack | Push a (Stack a)
instance Show a => Show (Stack a) where
  show EmptyStack = "EmptyStack"
  show (Push x xs) = "Push " ++ show x ++ " (" ++ show xs ++ ")"
instance Eq a => Eq (Stack a) where
  EmptyStack == EmptyStack = True
  (Push a as) == (Push b bs) = a == b && as == bs
  _ == _ = False


push :: a -> Stack a -> Stack a
push a b = Push a b

pop :: Stack a -> Maybe (a, Stack a)
pop EmptyStack = Nothing
pop (Push x xs) = Just (x, xs)
