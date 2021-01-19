#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//辗转相除法
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	int a = num1;
	int b = num2;
	int c = 0;
	while (c = num1 % num2)
	{
		num1 = num2;
		num2 = c;
	}
	printf("%d 和 %d的最大公约数:> %d\n", a, b, num2);
	printf("%d 和 %d的最小公倍数:> %d\n", a, b, a * b / num2);

	return 0;
}