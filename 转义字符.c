#include<stdio.h>

int main()
{
	printf("c:\test\test.c\n");
	printf("c:\\test\\test.c\n");//��\ǰ���һ��\,��Ϊ\\�µ�ת���ַ�
	printf("%c\n",'\'');//����\ʶ�𲻳��м��'
	printf("%c\n", '\130');//������Ϊx����Ӧ��ASCII��ֵΪ88����130��Ӧ�İ˽�����Ϊ88
	return 0;
}