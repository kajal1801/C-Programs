#include <stdio.h>

int main(){
    char s1[20];
    int i=0,c=0;
    printf("Enter a string: ");

    scanf("%[^\n]s",s1);

    while(s1[i] != '\0'){
        switch(s1[i]){
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                c++;
        }
        i++;
    }

    printf("The numbers of vowels in the word are: %d",c);
}