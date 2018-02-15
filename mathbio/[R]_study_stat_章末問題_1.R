NOUKA <- read.csv("nouka.csv")
#Q2
#a
hist(NOUKA$Area)
#b
mean(NOUKA$Price)
sum((NOUKA$Price-mean(NOUKA$Price))^2)/length(NOUKA$Price)
sqrt(sum((NOUKA$Price-mean(NOUKA$Price))^2)/length(NOUKA$Price))
sqrt(sum((NOUKA$Price-mean(NOUKA$Price))^2)/length(NOUKA$Price))/mean(NOUKA$Price)

mean(NOUKA$Area)
sum((NOUKA$Area-mean(NOUKA$Area))^2)/length(NOUKA$Area)
sqrt(sum((NOUKA$Area-mean(NOUKA$Area))^2)/length(NOUKA$Area))
sqrt(sum((NOUKA$Area-mean(NOUKA$Area))^2)/length(NOUKA$Area))/mean(NOUKA$Area)

#c
sum((NOUKA$Price-mean(NOUKA$Price))*(NOUKA$Area-mean(NOUKA$Area)))/
    (sqrt(sum((NOUKA$Price-mean(NOUKA$Price))^2))*(sqrt(sum((NOUKA$Area-mean(NOUKA$Area))^2))))

#Q3
(mean(c(2,4,5,7)))
(mean(c(2,4,5,70)))
(2*4*5*7)^(1/4)
(2*4*5*70)^(1/4)
