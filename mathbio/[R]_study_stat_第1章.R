DATA <- read.csv("cucumber.csv")
ALLDATA <- append(DATA$A, DATA$B)
hist(ALLDATA, breaks = seq(1700, 3800, 300)) #Fig. 1.3
mean(ALLDATA)
(MEAN_A  <- mean(DATA$A))
(MEAN_B  <- mean(DATA$B))
(DEV_A   <- DATA$A - MEAN_A)
(DEV_B   <- DATA$B - MEAN_B)

plot(DEV_A, pch=16, col="red")
abline(sum(DEV_A),sum(DEV_A), col="red")
points(DEV_B, pch=16, col="blue")
abline(sum(DEV_A),sum(DEV_A), col="blue", lty=2)#A, Bどちらのばらつきが大きいのかわからない。

plot(DEV_A^2, pch=16, col="red")
points(DEV_B^2, pch=16, col="blue")
sum(DEV_A^2)>sum(DEV_B^2)#Aの方がばらつきが大きい。
(VAR_A <- sum(DEV_A^2)/length(DATA$A))
(SD_A <- sqrt(VAR_A))
(VAR_B <- sum(DEV_B^2)/length(DATA$B))
(SD_B <- sqrt(VAR_B))
