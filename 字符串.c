#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[]="abc";
	char arr2[]={'a','b','c','d'};
	char arr3[]={'a','b','c','\0'};
	
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
	printf("%d\n",strlen(arr3));
	
	return 0;
}
