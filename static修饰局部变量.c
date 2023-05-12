#include<stdio.h>

test()
{
	static int a = 1;//修饰局部变量a
	a++;
	printf("%d\n", a);
}
//以上的a为局部变量，加static使a每次+1后都不销毁
//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
int main()
{
	int i = 0;
	while (i < 10)//当i<10，重新进循环至第10次
	{
		test();
		i++;
	}
	return 0;
}