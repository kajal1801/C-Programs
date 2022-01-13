#include <stdio.h>

int main(){
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    //A 2D array is an array of arrays
    //Giving column size is mandatory and we can leave the row size
    /*
        In case of Row major :-
        a[ i ] [ j ] = B + (( i * n ) + j ) * size

        In case of Column major :-
        a[ i ] [ j ] = B + (( j * m ) + i ) * size
    */
   int *q = &a[0][0]; 
   int *p = a[0];

   printf("%d %d %d %d %d",q,p,a, *a, a[0]);

   return 0;
}