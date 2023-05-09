#include<stdio.h>

int main()
{
	printf("c:\test\test.c\n");
	printf("c:\\test\\test.c\n");//将\前多加一个\,成为\\新的转义字符
	printf("%c\n",'\'');//不加\识别不出中间的'
	printf("%c\n", '\130');//输出结果为x，对应的ASCII码值为88，而130对应的八进制数为88
	return 0;
}