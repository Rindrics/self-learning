program loop
  implicit none
  integer i, wa
  wa = 0
  do i = 1, 100000
    wa = wa + 1 
  enddo
  write(*, *) 'wa = ', wa
end program loop
