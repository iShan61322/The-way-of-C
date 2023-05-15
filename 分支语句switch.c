#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int day = 0;
	printf("Input:", day);
	scanf("%d", &day);
	switch (day)//(整型常量表达式）
	{
	case 1:
		printf("Monday");
		break;//每个case后根据情况
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		printf("Input again");
		break;
	}
	return 0;
}