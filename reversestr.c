#include <stdio.h>
#include <string.h>

int main(){
    char s1[20],s2[20];
    int l, status = 1,i,j;
    printf("Enter a string: ");

    scanf("%[^\n]s",s1);

    strcpy(s2,s1);
    strrev(s2);

    l=strlen(s1);

    if (strcmp(s2,s1) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }

    return 0;
}

