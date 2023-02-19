module MyLib
(
  parseToken
) where

parseToken :: String -> String -> (String, String)
parseToken (' ':_) frag = (frag, "")
parseToken [] frag = ("error", frag)
parseToken (x:xs) frag = parseToken xs (frag ++ [x])
