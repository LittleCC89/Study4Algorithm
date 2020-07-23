include obj.mk

insertion : $(obj)
	gcc -o insertion $(obj)

.PHONY : clean
clean :
	rm insertion *.o -rf
