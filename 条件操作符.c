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
	//��ͬ��
	int max2 = a > b ? a : b;
	//exp1?exp2:exp3     exp1����exp2�������exp2��� or exp1������exp3�������exp3���
	printf("%d\n", max1);//������Ϊ2
	printf("%d\n", max2);//������Ϊ2
	return 0;
}