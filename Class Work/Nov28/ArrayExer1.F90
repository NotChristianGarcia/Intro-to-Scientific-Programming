Program ArrayExer1
	implicit none
	
	integer :: i
	integer,parameter :: N=10,L=9
	real(4),dimension(N) :: x = [1,2,3,4,5,6,7,8,9,10]
	real(4),dimension(L) :: y
	y(1:9:1) = (x(1:9) + x(2:10)) *.5
	print '(f4.2)', y
End Program ArrayExer1
