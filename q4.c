#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first side: ");
    scanf("%d",&a);
    printf("Enter the second side: ");
    scanf("%d",&b);
    printf("Enter the third side: ");
    scanf("%d",&c);
    if(a == b && b == c && a == c)
    printf("It is an equilateral triangle.");
    else if(a == b || b == c || a == c)
    printf("It is a isoceles triangle.");
    else
    printf("It is a scalene triangle.");
    return 0;
}