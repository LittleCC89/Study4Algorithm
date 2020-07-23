#include "public.h"

void ShowArr(int Arr[], int lenth){
    int i = 0;
    printf("{ ");
    for(i = 0; i < lenth; i++){
        printf("%d ", Arr[i]);
    }
    printf("}\n");
}