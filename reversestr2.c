#include <stdio.h>
#include <string.h>

int main(){
    char s1[20],s2[20];
    int l=0, status = 1,i=0,j;
    printf("Enter a string: ");

    scanf("%[^\n]s",s1);

    while(s1[l] != '\0'){
        l++;
    }

    l=l-1;

    while(l>=0){
        s2[i] = s1[l];
        l--;
        i++;
    }

    s2[i] = '\0';
    puts(s2);

    return 0;
}