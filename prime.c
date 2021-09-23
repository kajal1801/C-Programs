/* Kajal Jaiswal
   Enrollment number: 2012200001076
*/

#include <stdio.h>

int prime(int n){
    if(n == 1){
        return -1;
    }
    if(n == 2 || n == 3){
        return 1;
    }
    if(n%2 == 0 || n%3 == 0){
        return 0;
    }

    for(int i = 5;i*i < n; i+=6){
        if(n%i == 0 || n%(i+2) == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int f = prime(n);

    if(f == 1){
        printf("%d is a PRIME NUMBER",n);
    }
    else if(f == -1){
        printf("1 is neither PRIME nor COMPOSITE");
    }
    else{
        printf("%d is not a PRIME NUMBER",n);
    }

    return 0;
}