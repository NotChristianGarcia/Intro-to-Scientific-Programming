Module PointClass
	Type,public :: Point
		real(8) :: x,y
	contains
		procedure, public :: distance
	End Type Point

private
contains
	real function distance(p2)
		type(Point) :: p2
		distance = sqrt((x-p2%x)**2 + (y-p2%y)**2)
	end function distance
End Module PointClass
