#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int rev = 0;
    int m = n;
    while(m!=0){
        rev = (rev*10) + (m%10);
        m/=10;
    }

    if(rev == n){
        printf("%d is a Palindromic Number",n);
    }
    else{
        printf("%d was not a Palindromic Number",n);
    }

    return 0;
}