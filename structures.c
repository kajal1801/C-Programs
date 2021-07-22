#include <stdio.h>
#include <string.h>

struct stud{
    int roll;
    char name[20];
    float age;
};

struct example{
    struct t1{
        int k;
        char y;
    }x1;    
};

int main(){
    struct stud s1,s2;
    // struct example ex1;

    // ex1.v1.age=30;
    // printf("%f ",ex1.v1.age);

    struct example t2;
    t2.x1.k=50;
    printf("%d ", t2.x1.k);

    s1.roll = 20;
    strcpy(s1.name,"Ravi");

    s2.roll = 50;
    printf("%d %s %d",s1.roll, s1.name, s2.roll);

    return 0;
}