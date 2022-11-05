/*有 N 个人围成一圈，顺序排号，从第一个人开始报数（1 至 M 报数） ，凡
是报到 M 的人退出圈子。求最后留下的人原来排在第几号。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int M, N, Mj = 1024, sum = 0;
	printf("请输入N和M:\n");
	scanf("%d %d", &N, &M);
	int mirror[1024] = { 0 };//玩家存活记录器（0：去，1：存)
	for (int i = 0; i < N; i++)
	{
		mirror[i] = 1;
	}//初始化
	for (int j = 0, k = 0; j < N + 1; j++)
	{//j代表人类序号，k代表轮数
//自动踢人程序
		if (mirror[j] == 1)//确认玩家存活
		{
			sum = sum + 1;//报数
			if (sum == M)
			{
				k++;//记录轮次
				if (k == N)break;//游戏结束条件 
				mirror[j] = 0;//出局
				sum = 0;
			}
		}
		if (j == N - 1)//进度控制器;
		{
			j = -1;//形成圆环
		}
	}
	//幸存者查询
	for (int l = 0; l < N; l++){if (mirror[l] != 0) printf("%d\n", l + 1);}
	return 0;
}