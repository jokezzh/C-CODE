#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 13;
//	
//	//�Ѷ�����λ�еĵ���λ��Ϊ1
//	//00001101
//	//00010000
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	//�ѵ���λ��1��Ϊ0��
//	//00011101
//	//11101111
//	//��~(1>>4)
//	//~��λȡ��
//	a = a & ~(1 << 4);
//	printf("%d\n", a);
//
//	return 0;
//}
//&& �߼��� ���� if��a && b)a��bͬʱΪ����룻
// || �� ||�ж��������һ��Ϊ����治�ÿ���
// int c= a && b ,���aΪ0����ֱ�Ӳ�����
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
//	//��Ŀ������
//	b = (a > 5 ? 1 : -1);
//	return 0;
//
//}

//.�������ҳ��ṹ�嵱�еĳ�Ա
struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct Book b = { "c����","2022311",56 };
	struct Book* pb = &b;

	printf("����: %s\n", pb->name);//ָ��->��Ա
	printf("id:%s\n", pb->id);
	printf("�۸�%d\n", pb->price);
	//printf("����: %s\n", b.name);//�ṹ��  .  ��Ա
	//printf("id:%s\n", b.id);
	//printf("�۸�%d\n", b.price);

	return 0;
}