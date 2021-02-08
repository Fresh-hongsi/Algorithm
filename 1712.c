#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0; 
	double x = 0;
	int d = 0;

	scanf("%d %d %d", &a, &b, &c);
	d = a + b;
	if (a > 0, b > 0, c > 0)
	{
		if (c != b)
		{
			x = a / (c - b);
			if (c > b)
			{
				if (a % (c - b) == 0)
				{
					printf("%d", (int)x+1);
				}
				else {
					printf("%d", ((int)x) + 1);
				}
			}
			else
			{
				printf("%d", -1);
			}
		}
		else
		{
			printf("%d", -1);
		}
	}

	else
	{		
		printf("%d", -1);
			
	}
	
	
	
	
	return 0;

}