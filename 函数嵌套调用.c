#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������Ƕ�׵���
test3()
{
	printf("ţ��ɺ����\n");
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