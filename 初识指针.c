#include<stdio.h>

int main()
{
	int a = 1;

	int* pa = &a;//* 解引用操作，用来取pa中所存的a的地址

	*pa = 2;//通过改变地址的值改变a的值

	printf("%d\n", a);
	printf("%p\n", a);//%p用来打印地址
	return 0;
}