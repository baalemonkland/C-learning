#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//����10����������λ���䣬ż��λ����
int main6()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (i % 2 == 0)
			a[i] = a[i] * 2;
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}