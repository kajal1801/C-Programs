#include <stdio.h>
#include <conio.h>
#include <string.h>
int stack[20];
int top=-1;
void push(int a)
{
	stack[top++]=a;
}
int pop()
{
	return stack[top--];
}
int opor(char cr)
{
	if(cr=='+'||cr=='-'||cr=='*'||cr=='/')
	return 1;
	else
	return 0;
}
int main()
{
	char expression[20];
	int n1,n2,n3,lent,value,i;
	printf("Enter the expression to find it's prefix notation: ");
	scanf("\n %s",&expression);
	lent=strlen(expression);
	for(i=(lent-1);i>=0;i--)
	{
			switch(opor(expression[i]))
			{
				case 0:
					value=expression[i];
					push(value);
					break;
				case 1:
					n1=pop();
					n2=pop();
					switch(expression[i])
		         	{
		         		case '+':
				       		n3=n1+n2;
				    		break;
				        case '-':
					   		n3=n2-n1;
				     		break;
			            case '*':
				    		n3=n1*n2;
					    	break;
				        case '/':
				     	n3=n2/n1;
						break;
					}
					push(n3);
			}
	}
	printf("The result in prefix notation: %d\n",stack[top]);
	getch();
	
	return 0;
}
