#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10, };//����һ����������
	int i = 0;//����һ�����ͱ������ڴ�������еĵ�ַ���������еĵ�ַ��0��ʼ
	while (i < 10)
	{
		printf("%d\n", arr[i]);//whileifѭ������ȡֵ
		i++;
	}
	if (i == 10)
	{
		printf("over!\n");
	}
		return 0;
}