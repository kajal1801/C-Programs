#include <stdio.h>
int main()
{
    printf("Hello World!\n");
    float p = 3.2f;
    float *q = &p;
    printf("%f %p",p,q);
    return 0;
}