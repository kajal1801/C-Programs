#include <stdio.h>

int linear(int *a, int n, int e){
    for(int i = 0;i<n;i++){
        if(e == *(a+i)){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search: ");
    int ele;
    scanf("%d",&ele);

    int k = linear(arr, n, ele);

    if(k > -1){
        printf("The given element %d is present at the index %d", ele, k);
    }

    else{
        printf("The given element %d is not present in the given array",ele);
    }

    return 0;
}