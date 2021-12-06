#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("请输入两个数字：");
//	printf("请输入整数A："); scanf("%d", &a);
//	printf("请输入整数B："); scanf("%d", &b);
//	printf("A是B的%f%%\n", ((double)a / b) * 100);
//	return 0;
//}
int main()
{
	int a; 

	printf("请输入你的身高："); scanf("%d", &a);

	printf("你的标准体重是%3.1f公斤\n", ((a - 100) * 0.9));
	return 0;
}