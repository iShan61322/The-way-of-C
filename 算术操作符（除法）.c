#include<stdio.h>

int main()
{
	//得出9/2的正确结果
	int a = 9 / 2;//输出结果为4
	printf("%d\n", a);
	float b = 9 / 2;//输出结果为4.000000
	printf("%f\n", b);
	float c = 9 / 2.0;//输出结果为4.500000
	printf("%f\n", c);

	//分析：到小数位的运算与算式的小数位有关


	return 0;
}