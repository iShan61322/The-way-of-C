#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}

	//回收内存
	free(p);
	p = NULL;

	return 0;
}