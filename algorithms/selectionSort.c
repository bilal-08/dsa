#include <stdio.h>
#include "swap.c"
int main(){
    int arr[8] = {35,45,29,28,27,15,26,32};
    int i,j;
    // same as bubble
swap(&arr[2],&arr[3]);
printf("%d, %d\n",arr[2],arr[3]);
    for(i=0;i<8;i++){

        // remember to use i+1 not j=1;
        for(j=i+1;j<8;j++){
             if(arr[j]>arr[i]){
            printf("%d & %d\n",i,j);
            int tempo = arr[i];
            arr[i] = arr[j];
            arr[j] = tempo;
            
            }
        }
    }
    printf("Printing Array...\n");
    for(i=0;i<8;i++){
        printf("%d\n",arr[i]);
    }
}
