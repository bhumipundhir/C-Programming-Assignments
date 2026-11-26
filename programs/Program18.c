#include<stdio.h>
#include<string.h>
void main()
{
    char c[10],t[10];
    int i,j,k;
    printf("Enter a string --");
    gets(c);
    printf("\n\nseries of string is --\n\n");
    for(i = 0; c[i]!='\0' ; i++){
    for( j =i , k=0; c[j]!='\0';j++){
        t[k++] = c[j];
        t[k]='\0';
        printf("%s ",t);
        }

    }

}
