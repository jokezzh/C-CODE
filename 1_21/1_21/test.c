#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int d(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + d(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 1279;
//	int sum = d(n);
//	printf("%d\n", sum);
//
//	return 0;
//}
double v_d(int n, int k)
{
	if (k > 0)
	{
		return n * v_d(n, k - 1);
	}
	else if(k==0)
	{
		return  1;
	}
	else 
	{
		return 1.0 /( v_d(n, -k));
	}
}
int mian()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = v_d(n, k);
	printf("%lf\n", ret);
	return 0;
}