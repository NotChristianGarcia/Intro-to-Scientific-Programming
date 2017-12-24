program dotProduct
	implicit none
	integer :: clockRate,clockStart,clockEnd
	integer,parameter :: c1 = 1000,r1 = 1000,c2 = 1000,r2 = 1000
	real,dimension(c1,r1) :: arrayA = 5./2
	real,dimension(c2,r2) :: arrayB = 5./2
	real,dimension(c2,r1) :: arrayC,arrayD,arrayE

	call system_clock(count_rate = clockRate)
	call system_clock(clockStart)
	call myDotProduct(arrayA,arrayB,arrayC)
	call system_clock(clockEnd)
	print *, "myDotProduct - time:",(clockEnd-clockStart)/REAL(clockrate)
	print *,arrayC(400,400)
	
	call system_clock(count_rate = clockRate)
	call system_clock(clockStart)
	call myDotProductRedux(arrayA,arrayB,arrayD)
	call system_clock(clockEnd)
	print *, "myDotProductRedux - time:",(clockEnd-clockStart)/REAL(clockrate)
	print *,arrayD(400,400)

	call system_clock(count_rate = clockRate)
	call system_clock(clockStart)
	arrayE = matmul(arrayA,arrayB)
	call system_clock(clockEnd)
	print *, "matmul - time:",(clockEnd-clockStart)/REAL(clockrate)
contains
	subroutine myDotProduct(arrayA,arrayB,arrayC)
		implicit none
		integer :: i,j,k
		real,dimension(:,:) :: arrayA,arrayB
		real,intent(inout),dimension(:,:) :: arrayC
		if (size(arrayA(:,1)) == size(arrayB(1,:))) then
			do j = 1, size(arrayB(:,1))
				do i = 1, size(arrayA(1,:))
					arrayC(i,j) = 0 
					do k = 1, size(arrayA(1,:))
						arrayC(i,j) = arrayC(i,j) + arrayA(k,j) * arrayB(i,k)
					end do
				end do
			end do
		else 
			print *, "Matrix dimensions make this impossible."
		end if
	end subroutine myDotProduct
	subroutine myDotProductRedux(arrayA,arrayB,arrayD)
		implicit none
		integer :: i,j,k
		real,dimension(:,:) :: arrayA,arrayB
		real,intent(inout),dimension(:,:) :: arrayD
		if (size(arrayA(:,1)) == size(arrayB(1,:))) then
			do j = 1, size(arrayB(:,1))
				do i = 1, size(arrayA(1,:))
					arrayD(i,j) = dot_product(arrayA(:,j),arrayB(i,:))
				end do
			end do
		else 
			print *, "Matrix dimensions make this impossible."
		end if
	end subroutine myDotProductRedux	
end program dotProduct
