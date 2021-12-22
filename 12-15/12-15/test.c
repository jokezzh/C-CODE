#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int get_max(int a, int b)
//{
//	int z = 0;
//	if (a > b)
//		z = a;
//	else
//		z = b;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
// 
// 
// 
// 错误的！
//void Swap(int x ,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前： a = %d b= %d \n", a, b);
//	Swap(a, b);
//	printf("交换后： a = %d b= %d \n", a, b);
//	return 0;
//}
//void Swap(int* pa,int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前： a = %d b= %d \n", a, b);
//	Swap(&a, &b);
//	printf("交换后： a = %d b= %d \n", a, b);
//	return 0;
//}
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//	
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//
//		}
//	}
//		printf("\ncount = %d", count);
//	
//	return 0;
//}
int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	
		return 1;
	else
	    return 0;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_leap_year(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n count= %d", count);
	return 0;
}