#include<stdio.h>

int main()
{
	int a = 1;

	int* pa = &a;//* �����ò���������ȡpa�������a�ĵ�ַ

	*pa = 2;//ͨ���ı��ַ��ֵ�ı�a��ֵ

	printf("%d\n", a);
	printf("%p\n", a);//%p������ӡ��ַ
	return 0;
}