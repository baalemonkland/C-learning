#include<stdio.h>
int main()
{
	int prime_number[83];
	int i, j,k=0,l=0;
	for (i = 19; i <= 101;i++)
	{
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
				break;
			else
			{
				k++;
				if (k == i - 2)
				{
					prime_number[l] = i;
					l++;
				}
				continue;
			}
		}
		k = 0;
	}
	for (i = 0; i < l; i++)
		printf("%d,", prime_number[i]);
	return 0;
}