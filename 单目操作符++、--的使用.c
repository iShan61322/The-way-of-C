#include<stdio.h>

int main()
{
	int a = 1;
	int b = ++a;//ǰ��++����++��ʹ�ã�a=a+1=2���ٸ�ֵ��b
	printf("%d\n", b);//������Ϊ2
	printf("%d\n", a);//������Ϊ2

	int c = 1;
	int d = c++;//����++����ʹ����++��d=c=1����c=c+1=2
	printf("%d\n", d);//������Ϊ1
	printf("%d\n", c);//������Ϊ2
	return 0;
}