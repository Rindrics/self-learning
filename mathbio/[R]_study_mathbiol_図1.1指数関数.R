X                 <- seq(1,10^2, 1)
TIMESERIES        <- seq(1, length(X))
MULTHUSIAN_PARAM  <- 0.1
y1                <- NULL
for(t in TIMESERIES){
  if(t==1){
    y1 <- append(y1, X[1])
  }else{
    y1 <- append(y1, X[1]*exp(MULTHUSIAN_PARAM * t))
  }
}


y2        <- NULL
temporary <- X[1]
for(t in TIMESERIES){
  if(t!=1){
    dx_dt     <- temporary * MULTHUSIAN_PARAM
    temporary <- y2[t-1]+dx_dt
  }
  y2  <- append(y2, temporary)
}

par(mfrow=c(2,1))
plot(X, y1, type = "n")
lines(X, y1)
plot(X, y2, type = "n")
lines(X, y2)
y1
y2
