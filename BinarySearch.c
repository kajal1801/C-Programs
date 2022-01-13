#include <stdio.h>

int sort(int a[],int n){
    for(int i = 0; i<n-1 ; i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}

int binary(int a[],int lb, int ub, int e){
    if(ub>=lb){
        int mid = lb+ (ub-lb)/2;
        
        if(a[mid] == e){
            return mid;
        }
        if(a[mid] > e){
            return binary(a,lb,mid-1,e);
        }
        if(a[mid] < e){
            return binary(a,mid+1,ub,e);
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

    sort(arr,n);

    printf("Array after sorting: ");
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    int k = binary(arr,0, n , ele);

    if(k > -1){
        printf("\nThe given element %d is present at the index %d", ele, k);
    }

    else{
        printf("\nThe given element %d is not present in the given array",ele);
    }

    return 0;
}