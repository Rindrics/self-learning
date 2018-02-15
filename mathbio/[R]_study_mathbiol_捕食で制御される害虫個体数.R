P_per_r           <- seq(0,6,0.1)
PARAM_r           <- 0.5
PARAM_K           <- 20
X                 <- seq(0, PARAM_K, 0.1)
TIMESERIES        <- seq(1, length(X))
plot(X, INCREASE, type="n", xaxs="i", yaxs="i")
par(mfrow=c(1,1))
for(p in P_per_r){
  # PARAM_P           <- P_per_r * PARAM_r
  PARAM_P           <- p * PARAM_r
  ADJUST            <- 0.000001
  INCREASE          <- PARAM_r * X * (1-X/PARAM_K) 
  PREDATION         <- PARAM_P * X^2 / (1 + X^2)
  X_DIFF            <- INCREASE - PREDATION
  POSINEGA          <- (X_DIFF+ADJUST)/abs(X_DIFF+ADJUST)
  X_AT_INTERSECTION <- X[which(diff(POSINEGA)!=0)+1]-ADJUST
  
  lines(X, INCREASE,col="blue")
  par(new=T)
  lines(X, PREDATION,col="red")
  points(c(0,X_AT_INTERSECTION), c(0,rep(0,length(X_AT_INTERSECTION))), xpd=T, pch=16, cex=2)
  points(c(0,X_AT_INTERSECTION), c(0,rep(0,length(X_AT_INTERSECTION))), xpd=T, pch=16, col=c("white", "black"), cex=1.5)
}
