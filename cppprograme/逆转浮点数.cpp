
#include<cstring>
#include <iostream>
using namespace std;
int main3()
{
    char a[10];
    int i;
    for (i = 0; i < 5; i++)
    {
        a[i] = getchar();
    }
    for (i = 4; i>=0; i--)
    {
        cout << a[i];
    }
    return 0;
}

