#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int  get_max(int x, int y)//�����ṹ��ret_type fun_name(para1,*)   �������� ��������������������
{
	return (x > y) ? (x) : (y);//statment ������
}
int main()
{
	int a = 1;
	int b = 2;
	int max = get_max(a, b);//���ú�����
	printf("The max is:%d",max);
	return 0;
}