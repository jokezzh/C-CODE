#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("�������������֣�");
//	printf("����������A��"); scanf("%d", &a);
//	printf("����������B��"); scanf("%d", &b);
//	printf("A��B��%f%%\n", ((double)a / b) * 100);
//	return 0;
//}
int main()
{
	int a; 

	printf("�����������ߣ�"); scanf("%d", &a);

	printf("��ı�׼������%3.1f����\n", ((a - 100) * 0.9));
	return 0;
}