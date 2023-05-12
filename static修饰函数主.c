#include<stdio.h>


extern int Add(int x, int y);
int main()
{
	int num1 = 1;
	int num2 = 2;
	int sum = Add(num1, num2);
	printf("%d", sum);


	return 0;
}