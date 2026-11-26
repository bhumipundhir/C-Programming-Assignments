#include<stdio.h>
void main()
{
    int N, i, a=0, b=1, c;
    printf("Enter a Limit -- ");
    scanf("%d", &N);
    printf("Fibonacci Series is ---\n\n");
    for(i=0 ; i<=N ; i++){
        if(i<=1)
            printf("%d ",i);
        else{
            c=a+b;
            printf("%d  ",c);
            a=b;
            b=c;
        }
    }
}
