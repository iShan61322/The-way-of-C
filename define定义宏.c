#include<stdio.h>

#define ADD(x,y) x+y
#define Add(a,b) ((a)+(b))
int main()
{
	printf("%d\n", 6*ADD(1, 3));//����ʽΪ6*1+3���9
	printf("%d\n", 6*Add(1, 3));//����ʽΪ6*��1+3�����24
	return 0;
}