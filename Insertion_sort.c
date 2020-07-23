//插入排序

#include <stdio.h>
#include "public.h"

void Insertion(int Arr[], int lenth){
    int i, j = 0;
	int count1 = 0;
    for(i = 1; i < lenth; i++){
		int count2 = 0;
		count1 += 1;
        for(j = i; j > 0; j--){
			count2 += 1;
            if(Arr[j] < Arr[j - 1]){
                int tmp = Arr[j];
                Arr[j] = Arr[j - 1];
                Arr[j - 1] = tmp;
            }else{
                break;
            }
        }
		printf("%d, %d\n", count1, count2);
    }
}

//test

int main(){
    int Arr1[] = {6,5,4,3,2,1};//最坏情况,遍历次数为 n^2
    int Arr2[] = {1,2,3,4,5,6,7};//最好情况,遍历次数为 n

    //int Arr[] = {1,2,3,4,5,6};   
    //int Arr[] = {7,4,2,9,8,10};   //

    ShowArr(Arr1, sizeof(Arr1)/sizeof(int));
    Insertion(Arr1, sizeof(Arr1)/sizeof(int));
    ShowArr(Arr1, sizeof(Arr1)/sizeof(int));

    ShowArr(Arr2, sizeof(Arr2)/sizeof(int));
    Insertion(Arr2, sizeof(Arr2)/sizeof(int));
    ShowArr(Arr2, sizeof(Arr2)/sizeof(int));

}