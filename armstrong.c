#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m = n;
    int sum = 0;
    while(m!=0){
        int a = m%10;
        sum = sum + (a*a*a);
        m=m/10;
    }

    if(sum == n){
        printf("It is an Armstrong number");
    }
    else{
        printf("It is not an Armstrong number");
    }
    return 0;
}