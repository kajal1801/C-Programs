#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int i,k=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        k++;
        else
        continue;
    }
    if(k==2)
    printf("%d is a prime number.",num);
    else
    printf("%d is not a prime number.",num);
    return 0;
}