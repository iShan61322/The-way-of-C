#include<stdio.h>

//创建一个学生类型
struct stu
{
	char name[20];
	char sex[20];
	int age;
	float score;
};
int main()
{
	struct stu L = { "牛雨珊大王","鼠",18,99.9 };
	printf("%s %s %d %f\n", L.name, L.sex, L.age, L.score);

	struct stu* pL = &L;
	printf("%s %s %d %f\n", (*pL).name, (*pL).sex, (*pL).age, (*pL).score);//通过取pL的地址取出L的地址中的信息

	printf("%s %s %d %f\n", pL->name, pL->sex, pL->age, pL->score);//->为操作符，结构体指针->成员变量名
	return 0;
}