#include <stdio.h>
int main() { 
    double bsalary, gsalary;
    scanf("%lf",&bsalary);
    gsalary = bsalary + (0.4*bsalary) + (0.2 * bsalary);
    printf("The gross salary of Ramesh is: Rs. %lf", gsalary);
    

   return 0;
}