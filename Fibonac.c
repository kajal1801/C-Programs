#include <stdio.h>

int main(){
    int n,a=0,b=0,c=1;
    printf("Enter the range of the series: \n");
    scanf("%d",&n);
    if(n>=0){
        printf("0 1");
        int a = 0;
        int b = 1;
        int c = a + b;
        while(c<=n){
            printf(" %d",c);
            a = b;
            b = c;
            c = a + b;
        }
    }
    else{
        printf("Invalid");
    }
    return 0;
}
