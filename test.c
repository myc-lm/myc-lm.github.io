#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/* memset example */
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-*1', 6);//111111 every programmer should know memset!
	puts(str);
	return 0;
}
//int main()
//{
//	char arr[20] = "ab\0v";
//	printf("%s", arr);
//	return 0;
//}
////�ƶ�һ���ػ�����
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���60s�ڹػ���������룺��������������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "��������") == 0)
//	{
//		printf("���Ե�...\n");
//		Sleep(1000);
//		printf("ȡ���ɹ�\n");
//		Sleep(1000);
//		system("shutdown -a\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


////������Ϸ
//int menu()
//{
//	printf("*****����ը��****\n");
//	printf("**1.play 0.exit**\n");
//	printf("*****************\n");
//}
//int main()
//{
//
//	int input = 0;
//	do{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		srand((unsigned int)time(NULL));
//		if (input == 1)
//			game();
//		else if (input == 0)
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		else
//			printf("���ٴ����룺");
//	} while (input);
//	return 0;
//}
//int game()
//{
//	int rad = 0;
//	rad = rand() % 100 + 1;
//	int a = 0;
//	printf("������һ�����֣�");
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a > rad)
//			printf("����,���ٴ����룺\n");
//		else if (a < rad)
//			printf("С�ˣ����ٴ����룺\n");
//		else
//		{
//			printf("����,��ţ��\n");
//			break;
//		}
//	};
//}
