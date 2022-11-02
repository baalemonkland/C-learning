//人比人，气死人；鱼比鱼，难死鱼。小鱼最近参加了一个“比可爱”比赛，
//比的是每只鱼的可爱程度。参赛的鱼被从左到右排成一排，
//头都朝向左边，
//然后每只鱼会得到一个整数数值，表示这只鱼的可爱程度，很显然整数越大，
//表示这只鱼越可爱，而且任意两只鱼的可爱程度可能一样。由于所有的鱼头都朝向左边，
//所以每只鱼只能看见在它左边的鱼的可爱程度，
//它们心里都在计算，在自己的眼力范围内有多少只鱼不如自己可爱呢。
//请你帮这些可爱但是鱼脑不够用的小鱼们计算一下。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	printf("plz input the number of fishes\n");
	scanf("%d", &n);
	int fish[101], a[11];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &fish[i]);
	}
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		for (int j = 0; j<i; j++)
		{
			if (fish[j] < fish[i])
			{
				x++;
			}
		}
		i < n - 1 ? printf("%d ", a[i] = x): printf("%d ", a[i] = x);
	}
	return 0;
}
//#include <stdio.h>
//int a[101], b[101], n, i, j, k, ans[101];
//int main()
//{
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//        scanf("%d", &a[i]);
//    for (i = 1; i <= n; i++)    //把a[i]倒过来，好让前面的搜索后面的
//        b[i] = a[n - i + 1];
//    for (i = 1; i <= n; i++)   //从倒过来后的a[i](就是b[i])的第一个一直到最后一个，看它后面有没有可爱值比自己少的，若有ans[i]加一
//        for (j = i + 1; j <= n; j++)
//            if (b[j] < b[i]) {
//                ans[i]++;
//            }
//    for (i = n; i >= 1; i--)
//        if (i != 1) printf("%d ", ans[i]);  //逆序输出ans[i]
//        else printf("%d", ans[i]);
//    return 0;
//}
