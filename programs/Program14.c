#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int n,i,j,k;
    char c[10],t[10];
    printf("Enter a number--");
    scanf("%d",&n);
    int l=strlen(itoa(n,t,10));
    for (i=0;i<l;i++){
        for(j=i,k=0;j<l;j++){
            c[k++]=t[j];
            c[k]='\0';
            printf("%s ",c);
        }
    }
}
