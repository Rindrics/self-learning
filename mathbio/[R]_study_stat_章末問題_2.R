DATA        <- read.csv("nouka.csv")
head(DATA)
DATA$Price_std  <- (DATA$Price - mean(DATA$Price))/sd(DATA$Price)
DATA$Area_std   <- (DATA$Area -mean(DATA$Area))/sd(DATA$Area)