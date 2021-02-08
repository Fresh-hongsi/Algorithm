#include <stdio.h>

int main(void)
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

		
	scanf("%lf %lf", &a, &b);
	if (a > 0 && b < 10)
	{
		c = (double)(a) / (double)(b);
		printf("%.9lf", c);
		
	}
			
		
		
		
	
	return 0;
}