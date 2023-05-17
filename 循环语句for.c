#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i=0; i < 3; i++)//循环三次
	{
		for (j=0; j < 3; j++)//循环三次
		{
			printf("hehe\n");
		}
	}
	//输出结果为3*3九个hehe
	return 0;
}