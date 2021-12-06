#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
// 
//
//	return 0;
//}
//int main()
//{
//	int i;
//	int n;
//	int z = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		z *= i;
//	}
//	printf("%d\n", z);
//
//	return 0;
//}
//int main()
//{
//	int i = 0 ,n = 0, ret = 1, sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <=  n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0 ,n = 0, ret = 1, sum = 0;
//	for (n = 1; n <= 3; n++)
//	{	
//			ret *=n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}