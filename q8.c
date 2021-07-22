#include <stdio.h>
int main()
{
    int month;
    printf("ENter the month: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("31 days.");
        break;

        case 2:
        printf("Is it a leap year? If yes send 1 else send 0: ");
        int year, yes=1;
        scanf("%d",&year);
        if(year == yes)
        printf("29 days.");
        else
        printf("28 days.");
        break;

        case 3:
        printf("31 days.");
        break;

        case 4:
        printf("30 days.");
        break;
        
        case 5:
        printf("31 days.");
        break;

        case 6:
        printf("30 days.");
        break;

        case 7:
        printf("31 days.");
        break;

        case 8:
        printf("31 days.");
        break;

        case 9:
        printf("30 days.");
        break;

        case 10:
        printf("31 days.");
        break;

        case 11:
        printf("30 days.");
        break;

        case 12:
        printf("31 days.");
        break;
    }
}