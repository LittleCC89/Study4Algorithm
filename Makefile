include obj.mk

none :
	@echo "Please Select Algorithm:"
	@echo "insertion (插入排序)"
	@echo "bubble (冒泡排序)"
	@echo "merge (归并排序)"

insertion : $(insertion_obj)
	gcc -o insertion.e $(insertion_obj)
	./insertion

bubble : $(bubble_obj)
	gcc -o bubble.e $(bubble_obj)
	./bubble

merge : $(merge_obj)
	gcc -o merge.e $(merge_obj)
	./merge

.PHONY : clean
clean :
	rm $(exe) *.o -rf
