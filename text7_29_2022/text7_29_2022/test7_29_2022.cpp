#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
//{
//	int input = 0;
//	printf("你会好好学习吗（1/0）?>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("你真棒\n");
//	}
//	else
//	{
//		printf("还不赶紧学!\n");
//	}hughfcfx
{
	int line = 0;
	while (line < 3000)
	{
		printf("写代码：%d\n",line);
		line++;
	}
	if (line == 3000)
	{
		printf("继续加油!\n");
	}

	return 0;
}
//}
//选择语句
