#include<stdio.h>
void main()
{
    char name[30];
    float cprog, compfun, oprsys;
    float totalmarks, percentage;
    printf("Enter Student's Details -- \n");
    printf("Enter Student's Name --");
    scanf("%[^\n]s",&name);
    printf("Enter Marks Details -- \n");
    printf("C Programming (0-100) - ");
    scanf("%f",&cprog);
    printf("Computer Fundamentals (0-100) - ");
    scanf("%f",&compfun);
    printf("Operating System (0-100) - ");
    scanf("%f",&oprsys);
    totalmarks = cprog + compfun + oprsys;
    percentage = (totalmarks*100)/300;
    printf("\nStudent's details are -- \n\n");
    printf("Student's Name -- %s\n",name);
    printf("Marks of C Programming -- %.2f\n",cprog);
    printf("Marks of Computer Fundamentals -- %.2f\n",compfun);
    printf("Marks of Operating System -- %.2f\n",oprsys);
    printf("Total Marks -- %.2f/300 \n",totalmarks);
    printf("Percentage -- %.2f%% \n",percentage);
    printf("Division -- ");
    if (percentage>= 60)
        printf("First Division\n");
    else if (percentage>= 48)
        printf("Second Division\n");
    else if (percentage>= 30)
        printf("Third Division\n");
    else
        printf("Fail\n");
}
