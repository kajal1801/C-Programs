#include <stdio.h>
 
 int main(){
     int n,i,j,k,c=0;
     printf("Enter the size of the array: ");
     scanf("%d",&n);

    int temp[n];
     int a[n];
     for(i=0;i<n;i++){
         scanf("%d",&a[i]);
     }

    for (i=0; i<n-1; i++)
        if (a[i] != a[i+1])
            temp[c++] = a[i];
    temp[c++] = a[n-1];

    for (i=0; i<j; i++)
        a[i] = temp[i];
    
    n=c;

     for(i=0;i<n;i++){
         printf("%d ",a[i]);
     }

     return 0;
 }