#include <stdio.h>

int main(){

    char *p = "Hello" ; /* pointer is variable, so is string */ 
    //printf("%s",p);
    //p++;
    //printf("%c",*p);
    *p = 'M' ; /* works */
    printf("%s",p);

    p = "Bye";
    printf("%s",p);

    return 0;
}