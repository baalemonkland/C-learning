#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double helon(double a, double b, double c);
int main5()
{
	double a, b, c,ss;
	cin >> a >> b >> c;//�������߳�
	ss = helon(a, b, c);
	cout <<fixed<<setprecision(1) << ss << endl;//������������
	system("pause");
	return 0;
}
double helon(double a, double b, double c)
{
	double p, s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}