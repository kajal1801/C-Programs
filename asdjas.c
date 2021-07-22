//0 0 7 6 14 12 21 18 28 24 35 30
#include <stdio.h>
int main()
{
	int p, out, i = 1, j = 1;
	printf("Give the nth term:");
	scanf("%d", &p);
	if (p <= 2)
	{
		printf("0");
		return 0;
	}
	else
	{
		if (p % 2 == 0)
		{
            out = ((p/2)-1) * 6;
			printf("%d", out);
		}
		else if (!(p % 2 == 0))
		{
			out = (p/2)*7;
			printf("%d", out);
		}
	}
	return 0;
}