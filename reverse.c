/* Kajal Jaiswal
   Enrollment no.: 2012200001076
*/

#include <stdio.h>

int main(){
    int n,rev = 0;
    printf("Enter the number to be reversed: ");
    scanf("%d", &n);
    int m = n;
    while(m!=0){
        int a = m%10;
        rev = rev*10 + a;
        m /= 10;
    }

    printf("The reverse of %d is: %d",n,rev);

    return 0;
}