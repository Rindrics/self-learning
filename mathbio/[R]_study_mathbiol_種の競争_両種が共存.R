PARAM_r1          <- 1
PARAM_r2          <- 2
PARAM_K1          <- 75
PARAM_K2          <- 80
PARAM_a           <- 0.7
PARAM_b           <- 0.8
TIMESERIES        <- 1:100
ZERO_TO_100       <- 0:100
INITIAL_X         <- seq(1, 100,10)
INITIAL_Y         <- seq(1, 100,10)
plot(1,1, xlim=c(0, 100), ylim=c(0, 100), type="n", xaxs="i", yaxs="i",ann=F)
for(ix in INITIAL_X){
  for(iy in INITIAL_Y){
    x                 <- ix
    y                 <- iy
    
    for(t in TIMESERIES[-1]){
      dx_dt <- PARAM_r1 * x[t-1] * (1 - (x[t-1] + PARAM_a * y[t-1])/PARAM_K1)
      dy_dt <- PARAM_r2 * y[t-1] * (1 - (PARAM_b * x[t-1] + y[t-1])/PARAM_K2)
      x     <- append(x, x[t-1]+dx_dt)
      y     <- append(y, y[t-1]+dy_dt)
    }
    # plot(TIMESERIES, x, ylim=c(0,PARAM_K1), type="n")
    # lines(TIMESERIES, x, col="blue")
    # lines(TIMESERIES, y, col="red")
    # legend(0, 80, c("Sp. 1", "Sp. 2"), col=c("blue", "red"), lty=1)
    par(mfrow=c(2,2))
    par(mfrow=c(1,1))
    lines(x, y, col="red")
  }
}
points(0,0,pch=21,xpd=21)
points((PARAM_a*PARAM_K2-PARAM_K1)/(PARAM_a*PARAM_b-1), -PARAM_b*(PARAM_a*PARAM_K2-PARAM_K1)/(PARAM_a*PARAM_b-1)+PARAM_K2,pch=16)
lines(ZERO_TO_100, (PARAM_K1-ZERO_TO_100)/PARAM_a, lty=2); points(PARAM_K1,0,pch=21, xpd=T)
lines(ZERO_TO_100, (-ZERO_TO_100*PARAM_b)+PARAM_K2, lty=2); points(0, PARAM_K2,pch=21, xpd=T)
points(80,80, pch=16); arrows(80,80, 80, 70, length=0.1);arrows(80,80, 70, 80, length=0.1)
points(5,90, pch=16);arrows(5,90,15,90, length=0.1);arrows(5,90,5,80, length=0.1)
points(10,20, pch=16);arrows(10,20,20,20, length=0.1);arrows(10,20,10,30, length=0.1)
points(90,5, pch=16);arrows(90,5,90,15, length=0.1);arrows(90,5,80,5, length=0.1)
axis(1, at=PARAM_K1,labels="K1", line = -1, col="transparent")
axis(1, at=PARAM_K2/PARAM_b,labels="K2/b", line = -1, col="transparent")
axis(2, at=PARAM_K2,labels="K2", line = -1, col="transparent")
axis(2, at=PARAM_K1/PARAM_a,labels="K1/a", line = -1, col="transparent")