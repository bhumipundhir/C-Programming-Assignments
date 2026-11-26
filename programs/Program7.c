#include<stdio.h>
void main()
{
    int N, i, j, X = 1, S;
    printf("Enter a Limit -- ");
    scanf("%d",&N);
    S = N;
    printf("\nDiamond Pattern -- \n\n");
    for(i=1 ; i<= N+N-1 ; i++){
        for(j=1 ; j<=S ; j++)
            printf(" ");
        for(j=1 ; j<=X ; j++){
            printf("X ");
        }
        X = (i < N)?++X :--X;
        S = (i < N)?--S :++S;
        printf("\n");
    }
}
