#include <stdio.h>
#include <math.h>

int main(){
    int n,i,m=1,j,c;
    printf("Enter the position: \n");
    scanf("%d",&n);
    if(n>1){
        for(i=3;;i++){
            c=0;
            for(j=2;j<i;j++){
                if(i%j==0){
                    c++;
                }
            }
            if(c==0){
                m++;
            }
            if(m==n){
                printf("%d",i);
                break;
            }
        }
    }
    else{
        printf("2");
    }

    return 0;
}