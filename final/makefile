info:
	@echo "You can do: 'make RunAll' or 'make RunF0X' (X being between 1 and 5)."
	@echo "You may also 'make clean' or 'make superclean.'"

RunAll: RunF01 RunF02 RunF03 RunF04 RunF05

RunF01: FinalP01.cc FinalLib.o
	icpc -o RunF01 FinalP01.cc FinalLib.o

RunF02: FinalP02.cc FinalLib.o
	icpc -o RunF02 FinalP02.cc FinalLib.o

RunF03: FinalP03.cc FinalLib.o
	icpc -o RunF03 FinalP03.cc FinalLib.o

RunF04: FinalP04.cc FinalLib.o
	icpc -o RunF04 FinalP04.cc FinalLib.o

RunF05: FinalP05.cc FinalLib.o
	icpc -o RunF05 FinalP05.cc FinalLib.o

FinalLib.o:
	icpc -c FinalLib.cc

clean:	
	rm -f FinalLib.o

superclean:
	rm -f FinalLib.o RunF01 RunF02 RunF03 RunF04 RunF05
