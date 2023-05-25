#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数的嵌套调用
test3()
{
	printf("牛雨珊大王\n");
	return 0;
}
test2()
{
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		test3();
	}
	return 0;
}
test()
{
	test2();
	return 0;
}
int main()
{
	test();
	return 0;
}