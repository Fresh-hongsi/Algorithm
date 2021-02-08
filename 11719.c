#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[102];
	
	int i = 0;
	while (fgets((str), sizeof(str), stdin) != NULL)
	{
		fputs(str, stdout);
	}


	return 0;
}