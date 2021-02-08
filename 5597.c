#include <stdio.h>

int main(void)
{
	int stu_num[28] = { 0, };
	int i = 0;
	int k = 0;
	int j = 0;
	int temp = 0;
	int miss1 = 0;
	int iss2 = 0;
	int c = 0;

	/*for (i = 0; i < 28; i++)
	{
		scanf("%d", &stu_num); //28명의 학생들 번호 받음
	}*/
	for (i = 0; i < (sizeof(stu_num) / sizeof(int)); i++)
	{
		scanf("%d", &stu_num[i]);
	}
	for (j = 0; j < 28; j++) //28명의 학생 오름차순으로 정렬
	{
		for (k = 0; k < 27; k++)
		{
			if (stu_num[k] > stu_num[k + 1])
			{
				temp = stu_num[k];
				stu_num[k] = stu_num[k + 1];
				stu_num[k + 1] = temp;
			}
		}
	}
	

	return 0;
	



}