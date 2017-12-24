program ContExercise1

implicit none

integer :: inputNum

print *, "Give me an integer input: "
read *, inputNum

if ((inputNum/3)*3 == inputNum) then
	if ((inputNum/5)*5 == inputNum) then
		print *, "FizzBuzz!"
	else
		print *, "Fizz"
	end if
else if ((inputNum/5)*5 == inputNum) then
	print *, "Buzz"
end if

end program
