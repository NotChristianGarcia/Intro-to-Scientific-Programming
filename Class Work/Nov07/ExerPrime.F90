Program ExerPrime
implicit none
integer :: i = 3, nPrimes = 1

print *, 2
do while (nPrimes < 100)
	if (primeTest(i) == .TRUE.) then
		print *, i
		nPrimes = nPrimes + 1
	end if
	i = i + 1
end do


Contains
	logical function primeTest(x)
		implicit none
		integer, intent(in) :: x
		integer :: k
		primeTest = .TRUE.
		do k = 2, x-1
			if (mod(x,k) == 0) then
				primeTest = .FALSE.
				exit
			end if
		end do
	end function primeTest
End Program ExerPrime
