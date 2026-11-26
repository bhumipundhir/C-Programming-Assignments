#include<stdio.h>
void LinearSearch();
void BinarySearch();
void main()
{
    char c;
    system("cls");
    printf("Searching Module ... \n\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("3. Exit\n");
    c = getch();
    if (c=='1'){
        LinearSearch();
    }
    else if (c=='2'){
        BinarySearch();
    }
    else if (c=='3'){
        exit(0);
    }
    printf("\n Do you want to continue.. press 1 else any key.");
    c = getch();
    if (c=='1'){
        main();
    }
}
void LinearSearch(){
    int arr[] = {44,55,33,22,45,8,2,23,1,4};
    int i, c = 0, N = 10, data;
    system("cls");
    printf("Linear Search Module...\n\n");
    printf("Array Elements are -- \n\n");
    for(i = 0 ; i < N ; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n\n Enter Data to find in Array-- ");
    scanf("%d",&data);
    for(i=0 ; i<N ; i++){
        if(arr[i]==data){
            printf("Data Found .... %d\n\n", data);
            c=1;
            break;
        }
    }
    if(c==0)
        printf("No Data Found..\n\n");
}
void BinarySearch(){
    int arr[] = {44,55,33,22,45,8,2,23,1,4};
    int i, c = 0, N = 10, data;
    int BEG, END, MID;
    system("cls");
    printf("Binary Search Module...\n\n");
    printf("Array Elements are -- \n\n");
    for(i = 0 ; i < N ; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n\n Enter Data to find in Array-- ");
    scanf("%d",&data);
    for(i=0 ; i<N ; i++){
        if(arr[i]==data){
            printf("Data Found .... %d\n\n", data);
            c=1;
            break;
        }
    }
    if(c==0)
        printf("No Data Found..\n\n");
}



