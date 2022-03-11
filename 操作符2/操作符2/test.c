#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 13;
//	
//	//把二进制位中的第五位置为1
//	//00001101
//	//00010000
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	//把第五位的1置为0；
//	//00011101
//	//11101111
//	//用~(1>>4)
//	//~按位取反
//	a = a & ~(1 << 4);
//	printf("%d\n", a);
//
//	return 0;
//}
//&& 逻辑与 并且 if（a && b)a，b同时为真进入；
// || 或 ||判断中如果有一个为真后面不用考虑
// int c= a && b ,如果a为0后面直接不考虑
//int main()
//{
//	int a = 0, b = 1, c = 2, d = 3;
//	/*int i = a++ && ++b && ++c;*/  //1 1 2 3 
//	int i = a++ || ++b || ++c;// 1 2 2 3
//
//	printf("a = %d  b = %d c = %d d =%d", a, b, c, d);
//	return 0;
//}
//int main ()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a * b;
//	int d = a / b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//	//三目操作符
//	b = (a > 5 ? 1 : -1);
//	return 0;
//
//}

//.操作符找出结构体当中的成员
struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct Book b = { "c语言","2022311",56 };
	struct Book* pb = &b;

	printf("书名: %s\n", pb->name);//指针->成员
	printf("id:%s\n", pb->id);
	printf("价格：%d\n", pb->price);
	//printf("书名: %s\n", b.name);//结构体  .  成员
	//printf("id:%s\n", b.id);
	//printf("价格：%d\n", b.price);

	return 0;
}