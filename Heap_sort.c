//heap sort
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "public.h"

#define PARENT(i) i/2
#define LEFT(i) (i)*2
#define RIGHT(i) (i)*2 + 1

void Max_Heapify(int Arr[], int lenth, int index){
    int left = LEFT(index + 1) - 1;
    int right = RIGHT(index + 1) - 1;
    int Max_index = index;

    printf("begin Max_heapify ...");
    ShowArr(Arr, lenth);

    if(left < lenth && right < lenth){
        Max_index = Arr[left] > Arr[right] ? left : right;
        Max_index = Arr[index] > Arr[Max_index] ? index : Max_index;
    }else if(left < lenth){
        Max_index = Arr[left] > Arr[index] ? left : index;
    }else if(right < lenth){
        Max_index = Arr[right] > Arr[index] ? right : index;
    }else{
        Max_index = index;
    }
    printf("Max_index ..%d\n", Max_index);
    if(Max_index != index){
        int tmp = Arr[index];
        Arr[index] = Arr[Max_index];
        Arr[Max_index] = tmp;
        Max_Heapify(Arr, lenth, Max_index);
    }
}

void Build_Max_Heap(int Arr[], int lenth){
    int index = lenth/2;
    int i = 0;
    for(i = index - 1; i >= 0 ; i--){
        Max_Heapify(Arr, lenth, i);
    }
}

void Heap_sort(int Arr[], int lenth){
    printf("建堆...\n");
    Build_Max_Heap(Arr,lenth);
    printf("建堆...end\n");

    int i = 0;

    printf("排序...\n");
    for(i = lenth -1; i > 0; i--){
        int tmp = Arr[i];
        Arr[i] = Arr[0];
        Arr[0] = tmp;
        Max_Heapify(Arr, i, 0);
    }
    printf("排序...end\n");
}

void main(){
    int Arr[] = {1, 2, 3, 4, 5, 6, 7};//, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    ShowArr(Arr, sizeof(Arr)/sizeof(int));
    printf("Arr_lenth %d\n", sizeof(Arr)/sizeof(int));
    Heap_sort(Arr, sizeof(Arr)/sizeof(int));
    ShowArr(Arr, sizeof(Arr)/sizeof(int));
}