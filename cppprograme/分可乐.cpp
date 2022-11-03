#include<iostream>
#include<iomanip>
using namespace std;
int main4()
{
	double t; int n;
	cin >> t >> n;
	cout <<fixed<<setprecision(3)<<t/n<<endl<<n*2;
	return 0;
}