#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int input = 0;//定义一个整型变量，为后面选择做准备
	printf("live or die?\n");
	scanf("%d", &input);//获取这个变量的值
	if (input == 1)//选择语句，输入1将是live！其他则是die！
	{
		printf("live!");
	}
	else
	{
		printf("die!");
	}
	return 0;
}