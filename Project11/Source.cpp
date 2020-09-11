#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int point[5][4], sum = 0, chef = 0, max = -100;
	for (int i = 0; i < 5; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &point[i][j]);
			sum += point[i][j];
		}
		if (sum > max)
		{
			max = sum;
			chef = i + 1;
		}
	}
	printf("%d %d", chef, max);


	return 0;
}