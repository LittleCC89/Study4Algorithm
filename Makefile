include obj.mk

none :
	@echo "Please Select Algorithm:"
	@echo "insertion (插入排序)"
	@echo "bubble (冒泡排序)"
	@echo "merge (归并排序)"

insertion : $(insertion_obj)
	gcc -o insertion $(insertion_obj)

bubble : $(bubble_obj)
	gcc -o bubble $(bubble_obj)

merge : $(merge_obj)
	gcc -o merge $(merge_obj)

.PHONY : clean
clean :
	rm $(exe) *.o -rf
