#include <stdio.h>

float add(float a,float b)
{
    float sum = a+b;
    return sum;
}

int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    float s = add(x,y);
    printf("Sum = %f",s);
    return 0; 
}