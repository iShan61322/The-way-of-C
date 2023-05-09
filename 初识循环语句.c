#include<stdio.h>

int main()
{
	int love = 0;
	while (love < 613)
	{
		printf("You must love more!%d\n",love);
		love++;
	}
	if (love == 613)
	{
		printf("You succeed!The mouse has falled in love with you!");
	}
	return 0;
}