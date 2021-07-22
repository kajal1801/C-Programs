#include <stdio.h>

int factorial(int x);

int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    int m = factorial(n);
    printf("The factorial of %d is : %ld",n,m);

    return 0;
}

int factorial(int x){
    if(x!=0){
        return x * factorial(x-1);
    }
    else{
        return 1;
    }
}