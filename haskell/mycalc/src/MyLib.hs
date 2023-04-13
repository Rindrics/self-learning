module MyLib
(
  parseStringToTokenList,
  calculateRPN,
) where

type StringToConsume = String
type Accumulator = String
type Token = String
type Operand = Double

parseStringToTokenList :: StringToConsume -> Accumulator -> [Token] -> [Token]
parseStringToTokenList "" reversedToken tokenList = reverse reversedToken:tokenList
parseStringToTokenList (' ':xs) reversedToken tokenList = parseStringToTokenList xs "" (reverse reversedToken:tokenList)
parseStringToTokenList (x:xs) accumulator tokenList = parseStringToTokenList xs (x:accumulator) tokenList

calculateRPN :: [Token] -> [Operand] -> Double
calculateRPN [] result = head result
calculateRPN ("+":rest) (num1:num2:numrest) = calculateRPN rest ((num2 + num1):numrest)
calculateRPN ("-":rest) (num1:num2:numrest) = calculateRPN rest ((num2 - num1):numrest)
calculateRPN ("*":rest) (num1:num2:numrest) = calculateRPN rest ((num2 * num1):numrest)
calculateRPN ("/":rest) (num1:num2:numrest) = calculateRPN rest ((num2 / num1):numrest)
calculateRPN (x:xs) stack = calculateRPN xs ((read x :: Double):stack)
