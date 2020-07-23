//归并排序
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "public.h"

void Merge(int Arr[], int lenth){
    int mid = lenth/2;
    int mid_r = lenth%2 == 1 ? mid + 1 : mid;
    int * Arr1 = Arr;
    int * Arr2 = Arr + mid;
    int * tmpArr_src = malloc(sizeof(int) * lenth);
    int * tmpArr = tmpArr_src;

    int i = 0;
    int j = 0;
    int tmpLenth = 0;

    while(i < mid && j < mid_r){
        if(Arr1[i] < Arr2[j]){
            tmpArr[i + j] = Arr1[i];
            i++;
        }else{
            tmpArr[i + j] = Arr2[j];
            j++;
        }
    }

    if(j == mid_r){
        memcpy(Arr2 + (mid_r - mid - i), Arr1 + i, (mid - i)*sizeof(int));
    }


    memcpy(Arr, tmpArr, (i + j)*sizeof(int));

    
}

void Merge_sort(int Arr[], int lenth){
    if(lenth == 2 ){
        /*
        if(Arr[0] > Arr[1]){
            int tmp = Arr[0];
            Arr[0] = Arr[1];
            Arr[1] = tmp;
        }
        return;*/
    }else if(lenth < 2){
        return;
    }

    int Mid_index = lenth/2;
    int Mid_index_r = lenth%2 == 1 ? Mid_index + 1 : Mid_index;
    printf("Mid_index : %d\n", Mid_index);
    Merge_sort(Arr, Mid_index);
    Merge_sort(Arr + Mid_index, Mid_index_r);
    Merge(Arr, lenth);
}

//test
int main(){
    //int Arr[] = {6,5,4,3,2,1}; //最坏情况,遍历次数为 n^2
    //int Arr[] = {1,2,3,4,5,6};   //最好情况,遍历次数为 n^2
    int Arr[] = {7,4,2,9,8,10};   //最好情况,遍历次数为 n
    //ShowArr(Arr, sizeof(Arr)/sizeof(int));
    //printf("Arr_lenth %d\n", sizeof(Arr));
    Merge_sort(Arr, sizeof(Arr)/sizeof(int));
    ShowArr(Arr, sizeof(Arr)/sizeof(int));
}