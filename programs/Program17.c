#include<stdio.h>
void main()
{
  int arr[3] [3] ,out[3];
  int i, j, sum=0;
  printf("enter matrix element--\n");
  for(i=0 ; i<3 ; i++){
    for(j=0 ; j<3; j++){
            scanf("%d",&arr[i][j]);
    }
  }
  printf("Matrix with sum of column Elements\n\n");
  for(i=0 ; i<3 ; i++){
    for(j=0 ,sum =0 ; j<3; j++){
      printf("%d ",arr[i][j]);
      sum = sum + arr[j][i];
  }
    out[i] = sum;
    printf("\n");
  }
    printf("--------------\n");
    printf("%d %d %d",out[0], out[1],out[2]);

}

