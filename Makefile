GPPPARAMS = -m32 #32 bit mode
ASMPARAM  = --32 #32 bit mode 
#how to genrate .o file from .cpp
%.o : %.cpp
        g++ $(GPPPARAMS) -o $@ -c $< #$@ target file -c 
				                         #$< means input files

%.o : %.s
        as $(ASMPARAM)  -o $@ $<
 