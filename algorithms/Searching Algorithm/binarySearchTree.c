#include <stdio.h>


int main(){


    int arr[10] = {1,2,3,4,6,7,8,9,15,20};
    int search_elem = 20;
    int high,low,mid,i;
    low = 0;
    high = 10;
    mid = (low/high)/2;
    
    for(i=0;i<=10;i++){

        if(search_elem < arr[mid]){
            mid = (low + mid)/2;
        }
        if(search_elem > arr[mid]){
            mid = (mid+high)/2;
        }
        if(search_elem == arr[mid]){
            return printf("searched value is : %d & the index: %d",arr[mid],mid);
        }


    }
        printf("No Element found");
}
