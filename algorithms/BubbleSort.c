#include <stdio.h>
int main(){


    int arr[8] = {35,40,29,28,27,15,26,32};
    int i,j;
    for(j=0;j<8;j++){
        for(i=0;i<8;i++){
            if(arr[i] < arr[j]){
                     int temp = arr[i];
                     arr[i] = arr[j];
                     arr[j] = temp;
            }
       
       }
    }
    printf("Printing Array...\n");
    for(i=0;i<8;i++){
        printf("%d\n",arr[i]);
    }
}
