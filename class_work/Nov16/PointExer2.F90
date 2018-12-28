
Module PointClass
	Type,public :: Point
		real(8) :: x,y
	contains
		procedure, public :: distance
	End Type Point

private
contains
	real function distance(p1,p2)
		class(Point) :: p1,p2
		distance = sqrt((p1%x-p2%x)**2 + (p1%y-p2%y)**2)
	end function distance
End Module PointClass

Program PointTest
	use PointClass
	implicit none
	type(Point) :: p1,p2
	p1 = point(1,1)
	p2 = point(4,5)
	print *, "Distance: ",p1%distance(p2)
End Program PointTest
