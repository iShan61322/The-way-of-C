#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int day = 0;
	printf("Input:", day);
	scanf("%d", &day);
	switch (day)//(���ͳ������ʽ��
	{
	case 1:
		printf("Monday");
		break;//ÿ��case��������
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