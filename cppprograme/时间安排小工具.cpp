/*学校和 yyy 的家之间的距离为 ss 米，而 yyy 以 vv 米每分钟的速度匀速走向学校。

在上学的路上，yyy 还要额外花费 1010 分钟的时间进行垃圾分类。

学校要求必须在上午 \textrm{8:00}8:00 到达，请计算在不迟到的前提下，yyy 最晚能什么时候出门。

由于路途遥远，yyy 可能不得不提前一点出发，但是提前的时间不会超过一天。*/
//一行两个正整数 s,vs,v，分别代表路程和速度。


//输出一个 2424 小时制下的时间，代表 yyy 最晚的出发时间。
//输出格式为 \texttt{ HH:MM }HH:MM，分别代表该时间的时和分。必须输出两位，不足前面补 00。
#include<iostream>
using namespace std;
int hour(int T);
int minu(int T);
int main6()
{
	int s, v,t1,t2,T,m,h;//路程，速度，路上走路用时，分垃圾用时，出发时间,标准格式出发时间；
	cin >> s >> v;//输入路程，速度
	t1 = s / v;
	if (s % v != 0)
		t1++;
	//路上分钟数
	const int t0 = 480;//八点为最晚到校时间
	t2 = 10;//分垃圾时间
	T = (24*60+t0 - t2 - t1)%(24*60);//出发时间
	h = hour(T);
	m = minu(T);
		if (h < 10)
		{
			cout << 0 << h << ':';
			if (m < 10)
			{
				cout << 0 << m << endl;
			}
			else
			{
				cout << m << endl;
			}
		}
		else
		{
			cout << h << ':';
			if (m < 10)
			{
				cout << 0 << m << endl;
			}
			else
			{
				cout << m << endl;
			}
		}
	return 0;
	}
int hour(int T)
{
	int h;
	h = T /60;
	return h;
}
int minu(int T)
{
	int  m;
	m = T % 60;
	return m;
}