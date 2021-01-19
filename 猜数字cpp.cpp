//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//
//
//void Menu()
//{
//	printf("***********************\n");
//	printf("****  1.play game   ***\n");
//	printf("****  0.exit        ***\n");
//	printf("***********************\n");
//
//}
//
//
//void playgame()
//{
//	printf("开始游戏\n");
//	int num = rand() % 100 + 1;
//	int input = 0;
//
//	while (1)
//	{
//		printf("请输入你猜的数字:> ");
//		scanf("%d", &input);
//		if (input > num)
//		{
//			printf("大了点!\n");
//		}
//		else if (input < num)
//		{
//			printf("小了点!\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		Menu();
//		printf("请输入(1/0):> ");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			playgame();
//			getchar();
//			getchar();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误");
//			getchar();
//			getchar();
//			break;
//		}
//		system("cls");
//	} while (input);
//	return 0;
//}