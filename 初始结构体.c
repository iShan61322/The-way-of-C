#include<stdio.h>

//����һ��ѧ������
struct stu
{
	char name[20];
	char sex[20];
	int age;
	float score;
};
int main()
{
	struct stu L = { "ţ��ɺ����","��",18,99.9 };
	printf("%s %s %d %f\n", L.name, L.sex, L.age, L.score);

	struct stu* pL = &L;
	printf("%s %s %d %f\n", (*pL).name, (*pL).sex, (*pL).age, (*pL).score);//ͨ��ȡpL�ĵ�ַȡ��L�ĵ�ַ�е���Ϣ

	printf("%s %s %d %f\n", pL->name, pL->sex, pL->age, pL->score);//->Ϊ���������ṹ��ָ��->��Ա������
	return 0;
}