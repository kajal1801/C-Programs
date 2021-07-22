#include <stdio.h>
#include <math.h>
int main()
{
    float Ax,Ay,Bx,By,Cx,Cy;
    printf("Enter the vertices of point A: ");
    scanf("%lf",&Ax);
    scanf("%lf",&Ay);
    printf("Enter the vertices of point B: ");
    scanf("%lf",&Bx);
    scanf("%lf",&By);
    printf("Enter the vertices of point C: ");
    scanf("%lf",&Cx);
    scanf("%lf",&Cy);
    double ab = sqrt(pow(Bx-Ax,2)+pow(By-Ay,2));
    double bc = sqrt(pow(Cx-Bx,2)+pow(Cy-By,2));
    double ca = sqrt(pow(Ax-Cx,2)+pow(Ay-Cy,2));
    if(ab == bc && bc == ca && ab == ca)
    printf("It is an equilateral triangle.");
    else if(ab == bc || bc == ca || ab == ca)
    printf("It is a isoceles triangle.");
    else
    printf("It is a scalene triangle.");
    return 0;
}