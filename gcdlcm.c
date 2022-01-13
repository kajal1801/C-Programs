#include <stdio.h>

int gcd(int a,int b){
    if(b!=0){
        return gcd(b,a%b);
    }
    else{
        return a;
    }
}

int main(){
    int x, y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    int hcf = gcd(x,y);
    int lcm = (x*y)/hcf;

    printf("The GCD of the two numbers is: %d\nThe LCM of the two numbers is: %d",hcf,lcm);

    return 0;
}
