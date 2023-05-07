#include<stdio.h>

enum Sex
    {
    	male,
    	female,
    	secret
	};
int main()
{
	enum Sex s=male;
	printf("%d\n",male);
	printf("%d\n",female);
	printf("%d\n",secret);
	return 0;
}
