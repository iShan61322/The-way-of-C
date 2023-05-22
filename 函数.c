#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int  get_max(int x, int y)//函数结构：ret_type fun_name(para1,*)   返回类型 函数名（参数，参数）
{
	return (x > y) ? (x) : (y);//statment 函数体
}
int main()
{
	int a = 1;
	int b = 2;
	int max = get_max(a, b);//调用函数体
	printf("The max is:%d",max);
	return 0;
}