#include<stdio.h>
void main()
{
  int arr[3] [3] = {1,2,3,4,5,6,7,8,9};
  int i, j, sum=0;
  printf("enter matrix element--\n");
  for(i=0 ; i<3 ; i++){
    for(j=0 ; j<3; j++){
            scanf("%d",&arr[i][j]);
    }
  }
  printf("Matrix with sum of rows Elements\n\n");
  for(i=0 ; i<3 ; i++){
    for(j=0 ,sum =0 ; j<3; j++){
      printf("%d ",arr[i][j]);
      sum = sum + arr[i][j];
  }
    printf("= %d\n",sum);
  }
}
