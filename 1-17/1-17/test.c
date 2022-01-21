#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void scanf_table(int n)
//{
//	
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	scanf_table(n);
//	
//	return 0;
//}
//int my_string(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void re_st(char* str)
//{
//	int left = 0;
//	int right = my_string(str)-1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//
//{
//	char arr[] = "abcdef";
//	re_st(arr);
//	printf("%s\n", arr);
//	return 0;
//}
int my_string(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void re_st(char* str)
{
	int tmp = *str;
	int len = my_string(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_string(str + 1) >= 2)
	{
		re_st(str + 1);
	}
	*(str + len - 1) = tmp;
}
int main()

{
	char arr[] = "abcdef";
	re_st(arr);
	printf("%s\n", arr);
	return 0;
}