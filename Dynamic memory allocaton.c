#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i;
    int *arr;
    printf("enter the number of elements :");
    scanf("%d",&n);
    arr = malloc(20);
    arr = realloc(arr,100);
    printf("enter the %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the elements are:",n);
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    free(arr);
    printf("Praveen BS");
}

