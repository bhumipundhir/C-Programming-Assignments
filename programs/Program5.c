#include<stdio.h>
void main()
{
    int N, i=2, c=0;
    printf("Enter a Number - ");
    scanf("%d", &N);
    while(i<=N){
        if(N%i==0)
            c++;
        i++;
    }
    if(c==1)
        printf("Number %d is a Prime Number.\n",N);
    else
        printf("Number %d is Not a Prime Number.\n",N);
}
