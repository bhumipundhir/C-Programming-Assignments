#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int arr[11] = {1,2,3,4,5,6,7,8,9,10};
    int i, j, DATA, POS, N =10;
    printf("Array Elements are -- \n\n");
    for(i=0 ; i<N ; i++){
        printf("%d  ",arr[i]);
    }
    printf("\n\nEnter New Element Data -- ");
    scanf("%d",&DATA);
    printf("\nEnter Position To Insert New Element -- ");
    scanf("%d",&POS);
    for(i=N ; i>POS ; i--){
        arr[i] = arr[i-1];
    }
    arr[POS] = DATA;
    N = N+1;
    printf("\nAfter Insert New Element, Array Elements --\n\n");
    for(i=0 ; i<N ; i++){
        printf("%d  ",arr[i]);
    }
}
