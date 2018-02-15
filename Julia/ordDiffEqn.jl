function main()
  N     = 1000
  h     = 0.0004
  y     = zeros(N)
  y[1]  = 1
  @time for n = 1:N-1
    y[n + 1] = (1 - h) y[n]
  end
end
main()
