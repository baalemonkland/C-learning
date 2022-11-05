#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main5()
{
	char name[40];
	printf("name:");
	scanf("%s", name);
	printf("hello %s.\n",name);
	//char x[] = "abcdefg";
	char y[] = { 'a','b','c','d','e','f','g' };
	int x[10] = { 0,2,4 };
	printf("%d\n%d", sizeof(x), sizeof(y));
	int a[5] = { 1 };
	printf("%d", a);
	/*char st[] = "how are you";
	char a[11]; strcpy(a, st);*/
	
	/*char s[][5] = { "abc","def","ghi","jkl" };
	printf("%s\n ", s);
	for (int i = 0; i < 4; i++) {
		printf("%s ", s[i]);
	}*/
	
	//for (int i = 0; i < 12; i++)printf("%c", a[i]);;
	//char a[12]; strcpy(a, st[10]);
	//char a[12]; strcpy(a, st);
	// char a[]; strcpy(a, st);
	return 0;
}