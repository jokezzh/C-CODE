#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strlen  strcmp
#include <windows.h>//sleep
#include <stdlib.h>//随机数rand
#include <time.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //休眠一秒
//		system("cls"); //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
// {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");  scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//
//		}
//		else
//		{
//			printf("密码错误，退出程序。");
//		}
//
//		if (i == 3)
//		{
//			printf("三次错误，退出程序。");
//		}
//	}
//	return 0;
//}
void menu()
{
	printf("***************************\n");
	printf("******  1.paly  ***********\n");
	printf("******  0.exit  ***********\n");
	printf("***************************\n");
	
}
void game()
{

	int ret = rand()%100+1;
	int guess = 0;
	while (1)
	{
		printf("请猜数字:"); scanf("%d", &guess);
		if (ret < guess)
		{
			printf("猜大了\n");
		}
		else if (ret > guess)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");  scanf("%d\n", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (input);
	return 0;
}