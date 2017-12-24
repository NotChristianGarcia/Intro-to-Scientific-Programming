program Exercise5

implicit none

real :: a, b, c, d, vsphere, vcube
character(len=10) :: nameInp
integer :: intd

print *, "What's your name?: "
read *, nameInp

print *, "Enter 3 reals: a, b, c"
read *, a, b, c

print *, "Hello, " // trim(nameInp)

vsphere = (4/3) * 3.1415 * a**3.0
vcube = a * b * c
d = (a * b * c)/7
intd = int(d)

print *, "Sphere Volume = ", vsphere
print *, "Cube Volume = ", vcube
print *, d
print *, intd

end program Exercise5
