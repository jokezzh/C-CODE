#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 1, b = 1;
//	printf("%d%d%d", a + b, a = a + b, a = 3);
//	return 0;
//}


 /*int main()
{
    int i = 8;
    printf(" % d % d % d % d\n",i,--i,i,i--);

}*/
//int  main()
//{
//    int i = 0;
//   /* int count = 0;*/
//    for (i = 1000; i <= 2000; i++)
//    {
//        /*if (i % 4 == 0 && i % 100 != 0)
//        {
//            printf("%d ", i);
//            count++;
//        }
//        if (i % 400 == 0)
//        {
//            printf("%d ", i);
//            count++;
//        }*/
//
//        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//        {
//            printf("%d ", i);
//        }
//    }
//    /*printf("\n count= %d\n", count);*/
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int t = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        for (t = 2; t < i ; t++)
//        {
//            if (i % t == 0)
//            {
//                break;
//            }
//        }
//        if (i == t)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int t = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int flag = 1;
//        for (t = 2; t < i ; t++)
//        {
//            if (i % t == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            count++;
//            printf("%d ", i);
//        }
//        
//    }
//    printf("\ncount= %d\n", count);
//    return 0;
//}
// 
//sqrt ��������
//#include <math.h>
//int main()
//{
//    int i = 0;
//    int t = 0;
//    int count = 0;
//    for (i = 101; i <= 200; i+=2)
//    {
//        int flag = 1;
//        for (t = 2; t <= sqrt(i) ; t++)
//        {
//            if (i % t == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            count++;
//            printf("%d ", i);
//        }
//        
//    }
//    printf("\ncount= %d\n", count);
//    return 0;
//
// 
//    �ػ����� goto���
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("��ע�⣬�������������������60���ڹػ�\n");
//    scanf("%s", input);
//    if (strcmp(input, "������") == 0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//
//    return 0;
//}
//��gotoѭ��
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    { printf("��ע�⣬�������������������60���ڹػ�\n");
//    scanf("%s", input);
//    if (strcmp(input, "�аְ�") == 0)
//    {
//        system("shutdown -a");
//        break;
//    }
//
//
//
//    }
//
//    return 0;
//}