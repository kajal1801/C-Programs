#include <stdio.h>

int gcd(int x,int y){
    if(y!=0){
        return gcd(y,x%y);
    }
    else{
        return x;
    }
}
int main(){
    int n,m;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of m: ");
    scanf("%d",&m);
    int g= gcd(n,m);
    printf("THe GCD of %d and %d is: %d",n,m,g);

    return 0;
}