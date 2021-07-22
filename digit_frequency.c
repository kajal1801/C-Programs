#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p[10];
    for(int i=0;i<10;i++){
        p[i]=0;
    }
    char num[1000];
    scanf("%s", num);
    for(int i=0;i<strlen(num);i++){
        char c = num[i];
        for(int j = 0;j<=9;j++){
            if((int)(c-'0') == j){
                p[j]=p[j]+1;
            }
        }
    }
    for(int i= 0;i<10;i++){
        printf("%d ",p[i]);
    }
    return 0;
}