program VariableSize

implicit none


integer(kind=2) :: i
integer(4) :: j
integer(8) :: k


print *, huge(i), huge(j), huge(k) !find the largest value of integer can hold

end program VariableSize
