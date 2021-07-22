#include <stdio.h>
#include <string.h>

int main(){
    int i,n,j;
    char names[100][100];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%s",&names[i]);
    }
    char t[100];

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            int value = strcmp(names[j],names[j+1]);
            if(value>0){
                strcpy(t,names[j]) ;
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],t);
            }
        }
    }
    
    for(i = 0;i<n;i++){
        printf("%s ",names[i]);
    }
    return 0;
}