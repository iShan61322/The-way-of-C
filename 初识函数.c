#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

Add(int x, int y)//构造Add函数，定义变量x，y
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;//定义num1，num2两个变量
	scanf("%d %d", &num1, &num2);//获取两变量的地址
	int sum = Add(num1, num2);//将num1，num2的值带入所构造的函数中
	printf("%d\n", sum);
	return 0;
}