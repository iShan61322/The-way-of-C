#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int age=0;
	printf("Input your age:%d\n", age);
	scanf("%d", &age);

	if (0 < age && age <= 18)
	{
		printf("Teenager!");
	}
	else if (18 < age && age >= 27)
	{
		printf("Adult!");
	}
	else
	{
		printf("Old man!");
	}
	
	return 0;
}