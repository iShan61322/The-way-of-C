#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct mouse
{
	char name[20];
	int age;
	char sex[10];
	char identity[100];
};
void print(struct mouse* plys)
{
	printf("%s %d %s %s",plys->name,plys->age,plys->sex,plys->identity );
}
int main()
{
	struct mouse lys = { "牛大王",18,"雌鼠","鼠哥的鼠老婆及鼠小仆"};

	print(&lys);

	return 0;
}