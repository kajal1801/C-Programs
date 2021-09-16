#include <stdio.h>
#include <stdlib.h>
// float add(float a,float b)
// {
//     float sum = a+b;
//     return sum;
// }

int main(int argc1, char *argv1[])
{
    //printf("%d",argc);
    // printf("%s\n",argv[0]);
    // printf("%s\n",argv[1]);
    // printf("%s\n",argv[2]);

    int x,y;
    x = atoi(argv1[1]);
    y = atoi(argv1[2]);
    // scanf("%f %f",&x,&y);
    // int s = add(x,y);

    printf("Sum = %d",(x+y));

    return 0; 
}