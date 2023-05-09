#include<stdio.h>
#include<string.h>//运用strlen()所要引用的头文件

int main()
{
	char arr1[]="abc";
	char arr2[]={'a','b','c','d'};
	char arr3[]={'a','b','c','\0'};
	
	printf("%d\n",strlen(arr1));//输出结果为3
	printf("%d\n",strlen(arr2));//输出结果为随机数，因为没有结束字符\0
	printf("%d\n",strlen(arr3));//输出结果为3
	
	return 0;
}
