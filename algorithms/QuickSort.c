#include <stdio.h>

void QuickSort(int *arr, int left, int right){
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    if (left < j)
        QuickSort(arr, left, j);
    if (i < right)
        QuickSort(arr, i, right);
}

int main(){

    int arr[8] = {35,45,29,28,27,15,26,32};
    int i,j;

    QuickSort(arr,0,7);   // 0,7 is the range of the array
    printf("Printing Array...\n");
    for(i=0;i<8;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
