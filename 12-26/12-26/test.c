#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//int main()
//{
//	int n=1;
//	n = (6 * 4, n + 6), n * 2;
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);

	return 0;
}