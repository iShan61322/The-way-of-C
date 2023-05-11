#include<stdio.h>

int main()
{
	int a = 1;
	int b = ++a;//前置++：先++再使用，a=a+1=2后再赋值给b
	printf("%d\n", b);//输出结果为2
	printf("%d\n", a);//输出结果为2

	int c = 1;
	int d = c++;//后置++：先使用再++，d=c=1后再c=c+1=2
	printf("%d\n", d);//输出结果为1
	printf("%d\n", c);//输出结果为2
	return 0;
}