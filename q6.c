#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum=0,k=0,i=1;
    while(k<n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            k++;
            sum=sum+i;
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    printf("The sum of the first %d natural numbers is: %d",n,sum);
    return 0;
}