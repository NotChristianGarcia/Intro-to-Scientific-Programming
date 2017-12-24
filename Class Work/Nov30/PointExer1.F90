Program PointExer1
	implicit none
	integer :: i
	real(3),dimension(10),target :: arrayOfNum = [1,2,3,4,20,6,7,8,9,10]
	real, pointer :: pointAtGreatest

	pointAtGreatest => arrayOfNum(1)
	do i = 1, size(arrayOfNum)
		if (arrayOfNum(i) >= pointAtGreatest) then
			pointAtGreatest => arrayOfNum(i)
		end if
	end do
	
	print *,pointAtGreatest
	pointAtGreatest = 0
	print *,arrayOfNum
End Program PointExer1
