#include<stdio.h>
#include<string.h>
void main()
{
    int N, i, t;
    char out[33];
    printf("Enter a Number to find Binary -- ");
    scanf("%d",&N);
    t = N;
    printf("Value of N is -- %d\n\n",N);
    for(i = 0; N > 0; (N = N / 2), i++){
    out[i] = 48+(N%2);
    }
    out[i]= '\0';
    strrev(out);
    printf("Binary of %d is -- %s", t, out);
}
