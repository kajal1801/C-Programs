//0 0 7 6 14 12 21 18 28 24 35 30
#include <stdio.h>

int main(){
    int i,n,m,p=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
            m=6*p;
            p++;
        }
        else{
            m=7*p;
        }
    }
    printf("Number at %d th position is: %d",n,m);

    return 0;
}