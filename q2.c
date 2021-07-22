#include <stdio.h>
int main()
{
    int y1,y2;
    printf("Enter the starting year: ");
    scanf("%d",&y1);
    printf("Enter the ending year: ");
    scanf("%d",&y2);
    int i;
    printf("All the leap years between %d and %d are: \n",y1,y2);
    for(i = y1; i<=y2; i++)
    {
        if(i%100 == 0)
        {
            if(i%400 == 0)
            printf("%d\t",i);
            else
            continue;
        }
        else
        {
            if(i%4==0)
            printf("%d\t",i);
            else
            continue;
        }
    }
    return 0;
}