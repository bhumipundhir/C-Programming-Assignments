#include<stdio.h>
void main()
{
    int N, i, c, r;
    printf("Enter a Limit -- ");
    scanf("%d", &N);
    printf("Series is --- \n\n");
    for(i=1 ; i<= N ; i++){
        c=i*i*i;
        for(r=0 ; c>0 ; c=c/10){
            r=r*10+(c%10);
        }
        printf("%d ", r);
    }
}
