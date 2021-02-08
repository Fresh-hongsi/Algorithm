#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[257];
	int i = 0;
	int count = 0;
	while (1)
	{
		fgets(str, sizeof(str), stdin);
		str[strlen(str) - 1] = 0;
		for (i = 0; str[i]!=0; i++)
		{
			if (str[i] == 'a' || str[i] == 'A')
			{
				count = count + 1;
			}
			else if (str[i] == 'e' || str[i] == 'E')
			{
				count = count + 1;
			}
			else if (str[i] == 'i' || str[i] == 'I')
			{
				count = count + 1;
			}
			else if (str[i] == 'o' || str[i] == 'O')
			{
				count = count + 1;
			}
			else if (str[i] == 'u' || str[i] == 'U')
			{
				count = count + 1;
			}
			
		}
		if (str[0] == '#')
			break;
		else
		{
			printf("%d\n", count);
			count = 0;
		}

	}
	return 0;
}
/*printf("%d\n", count);
if (str[0] = '#')
{
	break;
}*/