#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void selectionsort();
void bubblesort();
int main()
{
char c;
system("cls");
printf("1.Selection Sort..\n");
printf("2.Bubble Sort..\n");
printf("3.Exit\n");
c = getch();
if(c == '1'){
selectionsort();
}
else if(c == '2'){
bubblesort();
}
else if(c == '3'){
exit(0);
}
printf("\nDo you wish to continue? Press 1, else any other key..\n");
c = getch();
if(c == '1'){
main();
}
}
void selectionsort(){
int arr[10];
int N=10,i,j,t;
printf("Enter 10 elements:\n");
for(i=0;i<N;i++){
scanf("%d",&arr[i]);
}
printf("Array Elements\n");
for(i=0;i<N;i++){
printf("%d ",arr[i]);
}
for(i=0;i<N;i++)
{
for(j=i+1;j<N;j++){
if(arr[i]>arr[j]){
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
}
printf("\n Sorted Array\n");
for (i=0;i<N;i++){
printf("%d ",arr[i]);
}
}
void bubblesort(){
int arr[10];
int N=10,i,j,t;
printf("Enter 10 elements:\n");
for(i=0;i<N;i++){
scanf("%d",&arr[i]);
}
printf("Array Elements\n");
for(i=0;i<N;i++){
printf("%d ",arr[i]);
}
for(i=0;i<N;i++)
{
for(j=0;j<N-1;j++){
if(arr[j]>arr[j+1]){
t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}
}
}
printf("\nSorted Array\n");
for (i=0;i<N;i++){
printf("%d ",arr[i]);
}
}
