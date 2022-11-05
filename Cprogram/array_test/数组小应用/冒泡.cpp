#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//Ã°ÅÝ
int main03()
{
	double a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%lf", &a[i]);
	}//ÊäÈë
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			double t;
			if (a[j + 1] < a[j])
			{t = a[j]; a[j] = a[j + 1]; a[j + 1] = t; }
		}
	}
	for(int i=0;i<10;i++)
	printf("%lf ",a[i]);
	return 0;
}