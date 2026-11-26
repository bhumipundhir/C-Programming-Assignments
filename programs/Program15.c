#include <stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3];
    int R1, R2, C1, C2, i, j, k;
    printf("Enter rows and columns \n");
    printf("Enter first matrix rows and columns \n");
    printf("Enter Row size \n");
    scanf("%d",&R1);
    printf("Column size--\n");
    scanf("%d",&C1);

    printf("Enter rows and columns \n");
    printf("Enter first matrix rows and columns \n");
    printf("Enter Row size \n");
    scanf("%d",&R2);
    printf("Column size--\n");
    scanf("%d",&C2);

    if (C1==R2)
    {
        printf("Enter first matrix elements --\n");
        for(i=0;i<R1;i++){
            for(j=0;j<C1;j++){

                scanf("%d",&A[i][j]);
            }
        }
        printf("Enter second matrix elements --\n");
        for(i=0;i<R2;i++){
            for(j=0;j<C2;j++){

                scanf("%d",&B[i][j]);
            }
        }
        printf("First and second matrix elements are--");
        printf("First matrix elements are--\n");
        for(i=0;i<R1;i++){
                for(j=0;j<C1;j++){
                printf("%d  ",A[i][j]);
            }

        }
        printf("Second matrix elements are--\n");
        for(i=0;i<R2;i++){
                 for(j=0;j<C2;j++){
                printf("%d  ",B[i][j]);
            }

        }
        printf("\n\nAfter Multiplication--\n\n");
        for(i=0;i<R1;i++){
            for(j=0;j<C2;j++){
                C[i][j]=0;
                for(k=0;k<C1;k++){
                    C[i][j]=C[i][j]+(A[i][k]*B[k][j]);

                }
                printf("%d   ",C[i][j]);

            }
            printf("\n");

        }

    }

    else {
        printf("\n\nWrong Rows and Columns....Please Enter Correct rows and columns");

    }
    return 0;
}

