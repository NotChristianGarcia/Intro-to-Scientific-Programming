Module PointMod
	implicit none
	type Point
		real :: x,y
	end type Point	

Contains
	real function distance(p1,p2)
		type(Point) :: p1,p2
		distance = sqrt((p1%x-p2%x)**2 + (p1%y-p2%y)**2)
	end function distance
End Module PointMod
