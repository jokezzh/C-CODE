#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strlen  strcmp
#include <windows.h>//sleep
#include <stdlib.h>//�����rand
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
//		Sleep(1000); //����һ��
//		system("cls"); //�����Ļ
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
//		printf("����������:");  scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//
//		}
//		else
//		{
//			printf("��������˳�����");
//		}
//
//		if (i == 3)
//		{
//			printf("���δ����˳�����");
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
		printf("�������:"); scanf("%d", &guess);
		if (ret < guess)
		{
			printf("�´���\n");
		}
		else if (ret > guess)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("��ѡ��:");  scanf("%d\n", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�����������������\n");
				break;
		}
	} while (input);
	return 0;
}