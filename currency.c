#include <stdio.h>
int main() { 
    int n;
    scanf("%d",&n);
    int t=0,f=0,h=0; //t = ten, f = fifty, h=hundred
    while(n!=0)
    {
        if(n>=100)
        {
            h++;
            n-=100;
        }
        if(n>=50 && n<100)
        {
            f++;
            n-=50;
        }
        if(n>=10 && n<50)
        {
            t++;
            n-=10;
        }
    }
    
    printf("Currency\t\tFrequency\n");
    printf("\t100\t\t%d\n",h);
    printf("\t50\t\t%d\n",f);
    printf("\t10\t\t%d\n",t);
   return 0;
}