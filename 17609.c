#include <stdio.h>
#include <string.h>

int is_palin(char*, int);
int main(void)
{
	char str[100000];
	int str_count = 0;
	int i = 0;
	int len = 0;
	scanf("%d", &str_count);
	getchar();
	for (i = 0; i < str_count; i++)
	{
		fgets(str, sizeof(str), stdin);
		str[strlen(str) - 1] = 0;
		len = strlen(str);
		printf("%d\n",is_palin(str,len));
	}
	return 0;

}

int is_palin(char* param,int lenth)
{
	int k = 0;
	int result = 0;
	int count = 0; //count는 맞는 짝의 가지 수가 몇개인 지 세어주는 변수;
	
	for (k = 0; k < (lenth / 2); k++)
	{
		if (param[k] == param[lenth - k-1])
		{
			count++;
			
		}
		
		
		
	}
	if (count == (lenth / 2) - 1)
	{
		return 1;
	}
	if (count == (lenth / 2))
	{
		return 0;
	}
	else
	{
		return 2;
	}
	
	count = 0;
	//result = 0;
}