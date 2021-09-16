/* Kajal Jaiswal
   Enrollment number: 2012200001076
*/

#include <stdio.h>

int main(){
    int p;
    printf("Enter the percentage of the student: ");
    scanf("%d",&p);
    printf("The students grade is: ");
    if(p>0 && p<=100){
        switch(p/10){
            case 10:
            case 9:
                printf("O");
                break;
            case 8:
                printf("A");
                break;
            case 7:
                printf("B");
                break;
            case 6:
                printf("C");
                break;
            case 5:
                printf("D");
                break;
            default:
                printf("FAIL");
        }
    }
    else{
        printf("Invalid input");
    }

    return 0;
}


