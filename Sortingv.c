//Write a program to sort a set of names stored in an array in alphabetical order.
#include<stdio.h>
#include <string.h>
int main(){
	int n;

	char c[100][100];//={"Ajay","vinod","raj","phelo","Gandu"};
	//printf("Enter the no. of name to be field");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",c[i]);
		//fflush(stdin);
	}
	puts("unsorted Array:");
	for(int i=0;i<n;i++){//displaying entered array array
		printf("%s\t",c[i]);
	}
	char s[100];
	//printf("Unsorted string=%s",c);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(c[i],c[j])>0){
				strcpy(s,c[i]);//s has c[i] value
				strcpy(c[i],c[j]);//c[i] has c[j]
				strcpy(c[j],s);//c[j] has c[i](s) value
			}
			

		}
	}
	puts("\nSorted array:");
	for(int i=0;i<n;i++){
		printf("%s ",c[i]);
	}

}