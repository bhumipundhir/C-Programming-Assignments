#include<stdio.h>
void main()
{
    int arr[10], N = 10, i, j, k;
    printf("Enter Unique Array Element -- \n");
    for(i = 0 ; i < N ; i++){
        printf("Enter Element [ %d ] -- ", i);
        scanf("%d", &arr[i]);
        for(j=0 ; j<i ; j++){
            if(arr[i]==arr[j]){
                system("cls");
                printf("Enter Unique Array Element -- \n");
                for(k=0 ; k<i ; k++){
                    printf("Enter Element [ %d ] -- %d\n",k,arr[k]);
                }
                i--;
            }
        }
    }
    printf("Unique Array Element are -- \n\n");
    for(i=0 ; i<N ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n\nPrime Array Element are -- \n\n");
    for(i=0 ; i<N ; i++){
        for(j=2, k=0; j <= arr[i] ; j++){
            if(arr[i] % j==0){
                k++;
            }
        }
        if(k==1)
            printf("%d ", arr[i]);
    }
}
