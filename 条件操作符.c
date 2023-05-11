#include<stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int max1 = 0;
	if (a > b)
		max1 = a;
	else
		max1 = b;
	//等同于
	int max2 = a > b ? a : b;
	//exp1?exp2:exp3     exp1成立exp2运算输出exp2结果 or exp1不成立exp3运算输出exp3结果
	printf("%d\n", max1);//输出结果为2
	printf("%d\n", max2);//输出结果为2
	return 0;
}