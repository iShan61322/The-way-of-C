#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int input = 0;//����һ�����ͱ�����Ϊ����ѡ����׼��
	printf("live or die?\n");
	scanf("%d", &input);//��ȡ���������ֵ
	if (input == 1)//ѡ����䣬����1����live����������die��
	{
		printf("live!");
	}
	else
	{
		printf("die!");
	}
	return 0;
}