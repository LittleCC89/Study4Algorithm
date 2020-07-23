//归并排序
#include <stdio.h>
#include <memory.h>
#include "public.h"

void Merge(int Arr[], int lenth){
    int mid = lenth/2;
    int * Arr1 = Arr;
    int * Arr2 = Arr + mid;
    int * tmpArr = malloc(sizeof(int) * lenth);

    int i = 0;
    int j = 0;
    int tmpLenth = 0;

    while(i < mid && j < mid){
        if(Arr1[i] < Arr2[j]){
            *tmpArr = Arr1[i];
            i++;
        }else{
            *tmpArr = Arr2[j];
            j++;
        }
        tmpArr++;
        tmpLenth++;
    }

    
    if(j == mid){
        memcpy(Arr2 + i, Arr1 + i, mid - i);
    }

    memcpy(Arr, tmpArr - tmpLenth, tmpLenth - 1);
    
}

void Merge_sort(int Arr[], int lenth){
    if(lenth < 2 ){
        return;
    }

    int Mid_index = lenth/2;
    Merge_sort(Arr, Mid_index -1);
    Merge_sort(Arr + Mid_index, Mid_index);
    Merge(Arr, lenth);
}

//test
int main(){
    //int Arr[] = {6,5,4,3,2,1}; //最坏情况,遍历次数为 n^2
    //int Arr[] = {1,2,3,4,5,6};   //最好情况,遍历次数为 n^2
    int Arr[] = {7,4,2,9,8,10};   //最好情况,遍历次数为 n
    ShowArr(Arr, sizeof(Arr)/sizeof(int));
    //printf("Arr_lenth %d\n", sizeof(Arr));
    Merge_sort(Arr, sizeof(Arr)/sizeof(int));
    ShowArr(Arr, sizeof(Arr)/sizeof(int));
}