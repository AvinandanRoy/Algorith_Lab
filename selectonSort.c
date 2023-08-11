//For concept follow geeksForgeeks . it is very helpfull

#include<stdio.h>

void swap(int *px , int *py){
    int temp = *px ;
    *px = *py ;
    *py = temp ;
}

void selectionSort(int arr[], int n){               //here n is size of array

    int i , j , min_idx ;

    for(i = 0 ; i < n-1 ; i++){
        min_idx = i ;
        for(j = i+1 ; j < n ; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }

            if(min_idx != i){
                swap(&arr[min_idx] , &arr[i]);
            }
        }
    }
}

void printSelectionSort(int arr[] , int n){
    int i ;
    for(i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{
    int arr[] = {4,3,10,12,13,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr , n);
    printSelectionSort(arr , n);
}
