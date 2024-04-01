#include<stdio.h>
#include <stdlib.h>

int main(void){
    //2D Array in stack
    int arr2[2][4] = {{1,2,4,4},{6,7,8,3}};
    //2D array partial in stack and heap
    int *arr1[2];
    arr1[0] = (int *)malloc(4*sizeof(int));
    arr1[1] = (int *)malloc(4*sizeof(int));
    //2D array fully inside heap
    int ** arr = (int **)malloc(2*sizeof(int *));
    arr[0] = (int *)malloc(4*sizeof(int));
    arr[1] = (int *)malloc(4*sizeof(int));
    for(int i = 0 ; i < 2 ; ++i){
        for(int j = 0 ; j < 4 ; ++j){
            arr[i][j]=5;
        }
    }
    for(int i = 0 ; i < 2 ; ++i){
        for(int j = 0 ; j < 4 ; ++j){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
