#include<stdio.h>
int main()
{
	int divisor[90];
	int i, j,number, l = 0;
	printf("please input a integer,or enter 0 to exit:\n");
	for (i = 0; i <= 1024; i++)
	{
		scanf_s("%d", &number);
		if (number == 0)
			break;
		else
		{

			for (j = 2; j < number; j++)
			{
				if ((number % j) == 0)
				{
					divisor[l] = j;
					number = (number / j);
					l++; j = 1;
				}
				else
				{
					continue;
				}
			}
			if (number != 1)
			{
				divisor[l] = number;
			}
			printf("the divitor of the number is:\n");
			for (i = 0; i < l; i++)
			{
				printf("%d*", divisor[i]);
			}
			printf("%d\n", divisor[i]);
		}
	}
	return 0;
}