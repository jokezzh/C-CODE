#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//a，b没达到整形大小
//	char a = 3;
//	//00000000000000000000000000000011
//	//char只有8比特位
//	//00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111
//	//计算时不是整形要整形提升，根据符号位补，无符号位补0
//	//10000010
//	char c = a + b;
//	//00000000000000000000000010000010
//	//10000010
//	printf("%d\n", c);
//	//打印时再次提升
//	//11111111111111111111111110000010-补码
//	//11111111111111111111111110000001-反码
//	//10000000000000000000000001111110-原码
//
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(+c));//4
//	//只要参与计算就要整形提升
//	return 0;
//}
//int fun()
//{
//	static int count = 1;//static保留不会重置
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
	//strlen-函数-求字符串长度，找出\0之前字符个数
	//sizeof-操作符-计算变量-类型所占空间大小，单位字节
	return 0;
}