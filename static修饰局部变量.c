#include<stdio.h>

test()
{
	static int a = 1;//���ξֲ�����a
	a++;
	printf("%d\n", a);
}
//���ϵ�aΪ�ֲ���������staticʹaÿ��+1�󶼲�����
//static���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
int main()
{
	int i = 0;
	while (i < 10)//��i<10�����½�ѭ������10��
	{
		test();
		i++;
	}
	return 0;
}