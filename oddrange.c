/* Kajal Jaiswal
   Enrollment number: 2012200001076
*/

#include <stdio.h>

int main(){
    int a,b,i,sum = 0;
    printf("Enter the beginning of the range: ");
    scanf("%d",&a);

    printf("Enter the end of the range: ");
    scanf("%d",&b);
    
    printf("The odd numbers in the range are:\n");

    for(i=a;i<=b;i++){
        if(i%2 != 0){
            sum += i;
            printf("%d\n",i);
        }
    }

    printf("The sum of odd numbers in the range %d to %d is %d",a,b,sum);

    return 0;
}