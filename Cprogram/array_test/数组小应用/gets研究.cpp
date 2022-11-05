#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main2()
{
	char str[20];
	int i;
	gets_s(str);
	printf("%s", str);
	return 0;
}
/*严重性	代码	说明	项目	文件	行	禁止显示状态
错误	C3861	“gets” : 找不到标识符	arraytest	E : \learning\cpp\arraytest\arraytest\getchar研究.cpp	8
*/