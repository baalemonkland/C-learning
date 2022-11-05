#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//输入10个数，奇数位不变，偶数位翻倍
int main7()
{
	double a[10];
	double sum = 0;int max = 0, min = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%lf", &a[i]);
		sum =sum+ a[i];
	}
	for (int i = 1; i < 10; i++)
	{
		if (a[i] > a[max])max = i;
		if (a[i] < a[min])min = i;
	}
	printf("average:%lf\nmax:%lf\nmin:%lf\n",sum/10,a[max],a[min]);
	return 0;
}