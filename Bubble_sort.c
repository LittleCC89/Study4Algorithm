//冒泡排序

#include <stdio.h>
#include "public.h"

void Bubble(int Arr[], int lenth){
    int i = 0;
    int j = 0;
    int count1 = 0;
    for(i=lenth - 1; i >= 0; i--){
        int count2 = 0;
		count1 ++;
        for(j = 0; j< i; j++){
            count2 ++;
            if(Arr[j] > Arr[j + 1]){
                int tmp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = tmp;
            }

        }
        printf("%d, %d\n", count1, count2);
    }
}

//test
int main(){
    int Arr1[] = {6,5,4,3,2,1};//最坏情况,遍历次数为 n^2
    int Arr2[] = {1,2,3,4,5,6,7};//最好情况,遍历次数为 n^2

    //int Arr[] = {1,2,3,4,5,6};   
    //int Arr[] = {7,4,2,9,8,10};   //

    ShowArr(Arr1, sizeof(Arr1)/sizeof(int));
    Bubble(Arr1, sizeof(Arr1)/sizeof(int));
    ShowArr(Arr1, sizeof(Arr1)/sizeof(int));

    ShowArr(Arr2, sizeof(Arr2)/sizeof(int));
    Bubble(Arr2, sizeof(Arr2)/sizeof(int));
    ShowArr(Arr2, sizeof(Arr2)/sizeof(int));
}