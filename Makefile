include obj.mk

none :
	@echo "Please Select Algorithm:"
	@echo "insertion (插入排序)"
	@echo "bubble (冒泡排序)"
	@echo "merge (归并排序)"
	@echo "heap (堆排序(最大堆))"

insertion : $(insertion_obj)
	gcc -o insertion.e $(insertion_obj)
	./insertion.e

bubble : $(bubble_obj)
	gcc -o bubble.e $(bubble_obj)
	./bubble.e

merge : $(merge_obj)
	gcc -o merge.e $(merge_obj)
	./merge.e

heap : $(heap_obj)
	gcc -o heap.e $(heap_obj)
	./heap.e

.PHONY : clean
clean :
	rm $(exe) *.o -rf
