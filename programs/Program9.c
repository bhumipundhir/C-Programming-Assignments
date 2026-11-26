#include<stdio.h>
void main()
{
    int arr[] = {44,55,33,22,45,8,2,23,1,4};
    int N = 10, m1, m2, i;
    printf("Array Elements are -- \n\n");
    for(i=0 ; i<N ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n First and Second Max Elements are -- \n\n");
    m1 = m2 = 0;
    for(i=0 ; i<N ; i++){
        if(arr[i]>m1){
            m2=m1;
            m1=arr[i];
        }
        else if(arr[i] > m2 && arr[i] < m1){
            m2 = arr[i];
        }
    }
    printf("First Max -- %d\n\n",m1);
    printf("Second Max -- %d\n\n",m2);
}
