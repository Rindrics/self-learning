# set.seed(1)
# list_even <- cbind(1:6, rep(0,6))
# for(i in 1:10000){
#     result <- sample(1:6,1)
#     list_even[result, 2] <- list_even[result, 2] + 1
# }
barplot(list_even[,2],ylim=c(0,2000))

# n               <- 20
# list_binominal  <- cbind(0:n, rep(0,n+1))
# for(i in 1:10000){
#     sum <- 0
#     for(i in 1:n){
#         sum <- sum + sample(0:1, 1)
#     }
#     list_binominal[sum+1, 2] <- list_binominal[sum+1, 2] + 1
# }
barplot(list_binominal[,2])
NORMAL_DIST <- 1/sqrt(2*pi*sum((list_binominal[,2] - mean(list_binominal[,2]))^2)/length(list_binominal[,2])) * 
    exp(-1*(list_binominal[,2] - mean(list_binominal[,2]))^2 /
            (2*sum((list_binominal[,2] - mean(list_binominal[,2]))^2)/length(list_binominal[,2])))
plot(NORMAL_DIST)
plot(list_binominal[,2]-mean(list_binominal[,2]))/sd(list_binominal[,2])
# kuji        <- c(rep(0,99),1)
# out_poisson <- NULL
# for(i in 1:1000){
#     result      <- sum(sample(kuji,5000,replace = T))
#     out_poisson <- append(out_poisson, result)
# }
hist(out_poisson)
