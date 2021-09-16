/* Ipsita Sanyashi
Enrollment no.: 2012200001074
*/

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The values of a and b after swaping is: \n a = %d and b = %d",a,b);
    
    return 0;
}
