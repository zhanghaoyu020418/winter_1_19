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
//	printf("��ʼ��Ϸ\n");
//	int num = rand() % 100 + 1;
//	int input = 0;
//
//	while (1)
//	{
//		printf("��������µ�����:> ");
//		scanf("%d", &input);
//		if (input > num)
//		{
//			printf("���˵�!\n");
//		}
//		else if (input < num)
//		{
//			printf("С�˵�!\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("������(1/0):> ");
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
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�������");
//			getchar();
//			getchar();
//			break;
//		}
//		system("cls");
//	} while (input);
//	return 0;
//}