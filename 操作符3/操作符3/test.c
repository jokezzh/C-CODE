#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//a��bû�ﵽ���δ�С
//	char a = 3;
//	//00000000000000000000000000000011
//	//charֻ��8����λ
//	//00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111
//	//����ʱ��������Ҫ�������������ݷ���λ�����޷���λ��0
//	//10000010
//	char c = a + b;
//	//00000000000000000000000010000010
//	//10000010
//	printf("%d\n", c);
//	//��ӡʱ�ٴ�����
//	//11111111111111111111111110000010-����
//	//11111111111111111111111110000001-����
//	//10000000000000000000000001111110-ԭ��
//
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(+c));//4
//	//ֻҪ��������Ҫ��������
//	return 0;
//}
//int fun()
//{
//	static int count = 1;//static������������
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//2-3*4
//	printf("%d\n", answer);
//	return 0;
//}
int main()
{
	char str[] = "hello bit";
	//hello bit\0
	printf("%d %d", sizeof(str), strlen(str));
	//strlen-����-���ַ������ȣ��ҳ�\0֮ǰ�ַ�����
	//sizeof-������-�������-������ռ�ռ��С����λ�ֽ�
	return 0;
}