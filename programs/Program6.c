#include<stdio.h>
void main()
{
    int N = 153, l, t, p, i, arm = 0, Lim, j;
    printf("Enter a Limit -- ");
    scanf("%d", &Lim);
    printf("\n\nAll Armstrong Between Limit are -- \n\n");
    for(j = 1; j <= Lim ; j++){
        for(N = j, l = 0 ; N > 0 ; (l++), (N=N/10));
        for(N = j, arm = 0 ; N > 0 ; (N=N/10)){
            for(p = 1, i = 1; i <= l; i++)
                p = p * (N%10);
            arm = arm + p;
        }
        if ( arm == j)
            printf("%d  ", arm);
    }
}
