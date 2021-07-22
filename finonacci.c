#include <stdio.h>

int fibo(int x,int m,int n,int l);

int main(){
    int n,a=0,b=0,c=1;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    printf("0 0");
    fibo(n,a,b,c);
    return 0;
}

int fibo(int x,int m,int n,int l){
    if(x>2){
        m=n;
        n=l;
        l=m+n;
        printf(" %d",l);
        return fibo(x-1,m,n,l);
    }
    else{
        return 0;
    }
    
}