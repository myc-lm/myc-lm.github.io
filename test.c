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
////制定一个关机程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在60s内关机。如果输入：“刘敏是猪”，则取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "刘敏是猪") == 0)
//	{
//		printf("请稍等...\n");
//		Sleep(1000);
//		printf("取消成功\n");
//		Sleep(1000);
//		system("shutdown -a\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


////数字游戏
//int menu()
//{
//	printf("*****数字炸弹****\n");
//	printf("**1.play 0.exit**\n");
//	printf("*****************\n");
//}
//int main()
//{
//
//	int input = 0;
//	do{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		srand((unsigned int)time(NULL));
//		if (input == 1)
//			game();
//		else if (input == 0)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else
//			printf("请再次输入：");
//	} while (input);
//	return 0;
//}
//int game()
//{
//	int rad = 0;
//	rad = rand() % 100 + 1;
//	int a = 0;
//	printf("请输入一个数字：");
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a > rad)
//			printf("大了,请再次输入：\n");
//		else if (a < rad)
//			printf("小了，请再次输入：\n");
//		else
//		{
//			printf("对了,真牛逼\n");
//			break;
//		}
//	};
//}
