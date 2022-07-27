#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = { 'a','b','c'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n",strlen(arr2));
	int len = strlen("abcdef");
	printf("%d\n", len);
	return 0;
}