/*ѧУ�� yyy �ļ�֮��ľ���Ϊ ss �ף��� yyy �� vv ��ÿ���ӵ��ٶ���������ѧУ��

����ѧ��·�ϣ�yyy ��Ҫ���⻨�� 1010 ���ӵ�ʱ������������ࡣ

ѧУҪ����������� \textrm{8:00}8:00 ���������ڲ��ٵ���ǰ���£�yyy ������ʲôʱ����š�

����·;ңԶ��yyy ���ܲ��ò���ǰһ�������������ǰ��ʱ�䲻�ᳬ��һ�졣*/
//һ������������ s,vs,v���ֱ����·�̺��ٶȡ�


//���һ�� 2424 Сʱ���µ�ʱ�䣬���� yyy ����ĳ���ʱ�䡣
//�����ʽΪ \texttt{ HH:MM }HH:MM���ֱ�����ʱ���ʱ�ͷ֡����������λ������ǰ�油 00��
#include<iostream>
using namespace std;
int hour(int T);
int minu(int T);
int main6()
{
	int s, v,t1,t2,T,m,h;//·�̣��ٶȣ�·����·��ʱ����������ʱ������ʱ��,��׼��ʽ����ʱ�䣻
	cin >> s >> v;//����·�̣��ٶ�
	t1 = s / v;
	if (s % v != 0)
		t1++;
	//·�Ϸ�����
	const int t0 = 480;//�˵�Ϊ����Уʱ��
	t2 = 10;//������ʱ��
	T = (24*60+t0 - t2 - t1)%(24*60);//����ʱ��
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