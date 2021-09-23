/* Kajal Jaiswal
   Enrollment no.: 2012200001076
*/

#include <stdio.h>

int main(){
    int n,sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);

    int m = n;
    while(m!=0){
        sum = sum + (m%10);
        m/=10;
    }

    printf("The sum of the all the digits of %d is: %d",n,sum);

    return 0;
}