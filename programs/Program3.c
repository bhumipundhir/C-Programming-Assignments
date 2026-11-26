#include<stdio.h>
void main()
{
    float price, dis, netamt;
    char c;
    printf("Television Price Calculator..\n\n");
    printf("1. Colour Television\n");
    printf("2. Black & White Television\n");
    printf("3. exit\n");
    c=getch();
    if(c=='1'){
        printf("\nColour Television..\n");
        printf("1. 24\" Television\n");
        printf("1. 32\" Television\n");
        c=getch();
        if(c=='1'){
            printf("\n24\" Television\n");
            printf("\nEnter Television Amount -- ");
            scanf("%f", &price);
            dis = price * 10/100;
            netamt = price - dis;
            printf("\nTelevision Price -- %.2f", price);
            printf("\nDiscount Amount -- %.2f", dis);
            printf("\nTelevision Net Amount -- %.2f", netamt);
        }
        else if (c=='2'){
            printf("\n32\" Television\n");
            printf("\nEnter Television Amount -- ");
            scanf("%f", &price);
            dis = price * 15/100;
            netamt = price - dis;
            printf("\nTelevision Price -- %.2f", price);
            printf("\nDiscount Amount -- %.2f", dis);
            printf("\nTelevision Net Amount -- %.2f", netamt);
        }
    }
    else if (c=='2'){
        printf("\nBlack & White Television\n");
            printf("\nEnter Television Amount -- ");
            scanf("%f", &price);
            dis = price * 12/100;
            netamt = price - dis;
            printf("\nTelevision Price -- %.2f", price);
            printf("\nDiscount Amount -- %.2f", dis);
            printf("\nTelevision Net Amount -- %.2f", netamt);
    }
    else if (c=='3'){
        exit(0);
    };
}
