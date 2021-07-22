#include <stdio.h>

int main()
{
    int n,p=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        p=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",p);
            p+=i;
        }
        printf("\n");
    }
}