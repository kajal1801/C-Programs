#include <stdio.h>

int max(int a[],int n){
    int m=0,i;
    for(i=0;i<n;i++){
        if(a[i]>a[m]){
            m=i;
        }
    }
    return m;
}

int main(){
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int max1 = max(a,n);
    a[max1] = 0;
    int max2 = max(a,n);
    printf("The second greatest number is: %d",a[max2]);
    
    return 0;
}