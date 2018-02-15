PARAM_r           <- 0.1
PARAM_K           <- 100
X                 <- seq(1,PARAM_K, 0.1)
TIMESERIES        <- seq(1, length(X))
INITIAL_X         <- 1
y   <- NULL
temporary <- INITIAL_X
for(t in TIMESERIES){
  if(t!=1){
    dx_dt     <- PARAM_r * temporary * (1-temporary/PARAM_K) 
    temporary <- temporary+dx_dt
  }
  y <- append(y, temporary)
}
plot(TIMESERIES, y, type = "n", xlim=c(0, 150),ylim=c(0, 200), xaxs="i", yaxs="i")
lines(c(TIMESERIES[1], TIMESERIES[length(TIMESERIES)]), c(PARAM_K, PARAM_K), col="red")
lines(TIMESERIES, y)
INITIAL_X         <- 200
y   <- NULL
temporary <- INITIAL_X
for(t in TIMESERIES){
  if(t!=1){
    dx_dt     <- PARAM_r * temporary * (1-temporary/PARAM_K) 
    temporary <- temporary+dx_dt
  }
  y <- append(y, temporary)
}
lines(TIMESERIES, y)
INITIAL_X         <- 50
y   <- NULL
temporary <- INITIAL_X
for(t in TIMESERIES){
  if(t!=1){
    dx_dt     <- PARAM_r * temporary * (1-temporary/PARAM_K) 
    temporary <- temporary+dx_dt
  }
  y <- append(y, temporary)
}
lines(TIMESERIES, y)