#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//	int a = 0; scanf("%d", &a);
//	int sum = 1;
//	for (i = 1; i <= a; i++)
//	{
//		sum *= i;
//		
//	}
//	printf("%d", sum);
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int j = 1;
//	
//	for (i = 1; i <= 10; i++)
//	{
//		j *= i;
//		sum += j;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//int main()
//{
//	int a = 0; scanf("%d", &a);
//	int b = 0; scanf("%d", &b);
//	int c = 0; scanf("%d", &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//			{
//				printf("%d%d%d", a, b, c);
//			}
//			else
//			{
//				printf("%d%d%d", a, c, b);
//			}
//		}
//		else
//		{
//			
//			printf("%d%d%d", c, a, b);
//		}
//	}
//	else
//	{
//		if (c > b)
//		{
//			printf("%d%d%d", c, b, a);
//		}
//		else
//		{
//			if (c > a)
//			{
//				printf("%d%d%d", b, c, a);
//			}
//			else
//			{
//				printf("%d%d%d", b, a, c);
//			}
//		}
//	}
//	return 0;
//} 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//
//	printf("%d%d%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//		
//*/
//	for (i = 3; i <= 100; i +=3)
//	{
//		printf("%d ", i);
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	/*int i = 0;
//	if (a < b)
//	{
//		 i = a;
//	}
//	else
//	{
//		i = b;
//	}
//	while (1)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//		i--;
//	}
//	*/
//	
//	
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int t = 0;
//	while (t=a%b)
//	{
//		a = b;
//		b = t;
//	}
//	printf("%d\n", b);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int z = a;
	int v = b;
	/*if (a < b)
	{
		int t = a;
		a = b;
		b = t;
	}
	int i = a;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d\n", i);
			break;
		}
		i++;
	}*/
	int t = 0;
	int i = 0;
	while (t = a % b)
	{
		a = b;
		b = t;
	}
	i = z * v / b;
	printf("%d\n", i);
	return 0;
}