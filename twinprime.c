#include <stdio.h>
#include <math.h>

int prime(int x){
    int c = 0,l;
    for(l=2;l<=sqrt(x);l++){
        if(x%l==0){
            c++;
        }
    }
    if(c==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int m,n,i,j;
    printf("Enter the beginning of the range: ");
    scanf("%d",&m);
    printf("Enter the end of the range: ");
    scanf("%d",&n);
    for(i=m;i<n-1;i++){
        int p = prime(i);
        if(p==1){
            int k = prime(i+2);
            if(k==1){
                printf("(%d , %d) ",i,i+2);
            }
            
        }
    }

    return 0;
}