module MyLib
(
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

push :: a -> [a] -> [a]
push a b = a:b

pop :: [a] -> Maybe (a, [a])
pop [] = Nothing
pop (x:xs) = Just (x, xs)
