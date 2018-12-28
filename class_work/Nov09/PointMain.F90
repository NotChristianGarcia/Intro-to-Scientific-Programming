Program PointMain
	use PointMod
	implicit none
	type(Point) :: p1,p2
	real(8) :: p1x,p1y,p2x,p2y
	read *, p1x,p1y,p2x,p2y
	p1 = Point(p1x,p1y)
	p2 = Point(p2x,p2y)
	print *, "Distance: ", distance(p1,p2)
End Program PointMain
