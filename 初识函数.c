#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

Add(int x, int y)//����Add�������������x��y
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;//����num1��num2��������
	scanf("%d %d", &num1, &num2);//��ȡ�������ĵ�ַ
	int sum = Add(num1, num2);//��num1��num2��ֵ����������ĺ�����
	printf("%d\n", sum);
	return 0;
}