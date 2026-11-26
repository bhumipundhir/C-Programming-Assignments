#include<stdio.h>
void main()
{
    int n;
    char c;
    system("cls");
    printf("Enter a Number--");
    scanf("%d",&n);
    if(n>=0 && n<=9)
        printf("Number is a One digit Number");
    else if(n>=10 && n<=99)
        printf("Number is a Two digit Number");
    else if(n>=100 && n<=999)
        printf("Number is a Three digit Number");
    else
        printf("Wrong input, Enter input again");
    printf("\n\nDo you want to continue this code? If yes press 1 else any other key");
    c = getch();
    if(c == '1')
        main();
}
