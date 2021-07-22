#include <stdio.h>

int main(){
    int n,i,j,c=1,k=1;
    printf("Enter the size of the array:" );
    scanf("%d",&n);
    int a[n];
    printf("ENter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++){
        k=1;
        for(j=0;j<i;j++){
            if(a[j]==a[i]){
                k=0;
                break;
            }
        }
        if(k==1){
            c++;
        }
    }

    printf("Total distinct numbers are: %d",c);

    return 0;
}