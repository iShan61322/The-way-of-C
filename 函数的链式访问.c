#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{

	int len = strlen("abc");
	printf("%d\n", len);

	printf("%d\n", strlen("abc"));

	printf("%d",printf("%d", printf("%d", 613)));//printf意思是返回在屏幕字符个数，所以先是‘613’，再‘3’，再‘1’
	return 0;
}