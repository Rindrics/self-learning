A   <- 0.3
B   <- 0.1
C   <- 0.3
MULTHUSIAN_PARAM  <- 0.1
Y0    <- 0
MAX_X <- 100
MAX_Y <- 1
set.seed(1)
for(i in 1:1000){
  x0  <- sample.int(MAX_X, 1)
  TIMESERIES        <- seq(1, 100)
  out <- NULL
  for(t in c(0,TIMESERIES)){
    if(t==0){
      x   <- x0
      y   <- Y0
    }else{
      dx_dt <- MULTHUSIAN_PARAM * x * (1 - A*x - B* y)
      dy_dt <- -C * y + x
      x     <- x+dx_dt
      y     <- y+dy_dt
    }
    out <- rbind(out, cbind(x, y))
  }
  out <- as.data.frame(out)
  if(i==1){
    # par(mfcol=c(1,1))
    # plot(TIMESERIES, out$x, type="l")
    # plot(TIMESERIES, out$y, type="l")
    # plot(out$x, out$y, type="l", xlim=c(0,MAX_X), ylim=c(0, 50))
    plot(out$x, out$y, type="l", xlim=c(0,4), ylim=c(0, 15))
  }else{
    lines(out$x, out$y, lwd=0.5, col=i)
  }
}