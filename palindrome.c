#include <stdio.h>
#include <string.h>

int main(){
    char s1[20];
    int l, status = 1,i,j;
    printf("Enter a string: ");

    scanf("%[^\n]s",s1);

    l=strlen(s1);
    for(i=0,j=l-1;i<=l/2;i++,j--){
        if(s1[i] != s1[j]){
            status = 0;
            break;
        }
    }

    if(status == 1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}