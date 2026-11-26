#include<stdio.h>
void main()
{
    int N, temp, rev = 0;
    printf("Palindrome Number Checker -- \n\n");
    printf("Enter a Number -- ");
    scanf("%d",&N);
    temp = N;
    while (N > 0){
        rev = rev * 10 + (N % 10);
        N = N / 10;
    }
    if ( temp == rev){
        printf("Number %d is a Palindrome Number\n\n", temp);
    }
    else{
        printf("Number %d is NOT a Palindrome Number\n\n", temp);
    }
}
