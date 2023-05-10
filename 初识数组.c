#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10, };//定义一组整型数组
	int i = 0;//定义一个整型变量由于存放数组中的地址，而数组中的地址从0开始
	while (i < 10)
	{
		printf("%d\n", arr[i]);//whileif循环依次取值
		i++;
	}
	if (i == 10)
	{
		printf("over!\n");
	}
		return 0;
}