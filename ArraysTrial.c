#include <stdio.h>

int main(){
    int a[10];
    int *q = a;
    for(int i = 0;i<10;i++){
        scanf("%d",&q[i]);
        //scanf("%d",a+i);
    }
    for(int i = 0;i<10;i++){
        printf("%d\t",i[a]);
    }
    printf("\n%p",(&a));
    printf("\n%p",(a+1));
    printf("\n%p",(&a+1));
    printf("\n%p",(&a[0]+1));

    return 0;
}