#include <stdio.h>
int main() { 
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b && a<c) || (a<b && a>c))
    printf("The second largest number is: %d",a);
    else if((b>c && b<a) || (b<c && b>a))
    printf("The second largest number is: %d",b);
    else
    printf("The second largest number is: %d",c);

   return 0;
}