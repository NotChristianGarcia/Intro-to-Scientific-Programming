program CharacterType

implicit none

character(len=10) :: first, last
character(len=20) :: fullname

first = "Christian"
last = "Garcia"

full = first
print *, full
full = first//last
print *, full
full = trim(first)//" "//trim(last)
print *, full

end program CharacterType
