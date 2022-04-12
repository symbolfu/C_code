#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// c语言经典100例

// 6题
// 用*号输出字母C的图案
//
//int main()
//{
//	printf("用*号输出字母c！\n");
//	printf(" ****\n");
//	printf(" *\n");
//	printf(" *\n");
//	printf(" ****\n");
//
//
//	return 0;
//}


// 7题
// 输出特殊图案

//int main()
//{
//    char a = 176, b = 219;
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", a, a, b, a, a);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    return 0;
//}


// 8题
// 输出9*9口诀

//int main()
//{
//	int i;
//	int j;
//
//	printf("打印9*9乘法口诀表\n");
//	for ( i = 1; i < 10; i++)
//	{
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


// 9题
// 要求输出国际象棋棋盘
//国际象棋棋盘由64个黑白相间的格子组成，分为8行*8列。用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。

//int main()
//{
//	int i;
//	int j;
//
//	for ( i = 1; i < 9; i++)
//	{
//		for (j = 1; j < 9; j++)
//		{
//			if (i % 2 != 0 && j % 2 == 1 || i % 2 == 0 && j % 2 != 1)           // (i + j) % 2 == 0
//				printf("1");
//			else
//				printf("0");
//		}
//		printf("\n");
//	}
//	return 0;
//}



// 10题
// 打印楼梯，同时在楼梯上方打印两个笑脸。

//int main()
//{
//	int i;
//	int j;
//
//	printf("\1\1\n");
//	for ( i = 1; i < 10; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			printf("%c%c", 219, 219);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 11 题
// 有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
// 假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
// 1,1,2,3,5,8
// 斐波拉去数列

//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i;
//	int temp = 0;
//
//	printf("第1个月总共有%d个兔子\n", b);
//	printf("第1个月总共有%d个兔子\n", b);
//
//	for ( i = 3; i < 40; i++)
//	{
//		temp = a + b;
//		a = b;
//		b = temp;
//		printf("第%d个月总共有%d个兔子\n", i, temp);
//	}
//
//	return 0;
//}


// 12 题
// 判断 101 到 200 之间的素数。

//void number_put(int start, int end);
//
//int main()
//{
//	int start;
//	int end;
//
//	printf("输入两个数字（12，25），输出两个数之间的素数：\n");
//	scanf("%d,%d", &start, &end);
//	number_put(start, end);
//
//	return 0;
//}
//
//
//void number_put(int start, int end)
//{
//	int i, j;
//	for ( i = start; i < end; i += 2)
//	{
//		for ( j = 3; j < i; j += 2)
//		{
//			if (i % j == 0)
//				break;
//		}
//		//if (i > 100 && flag)
//		if (j >= i)
//			printf("%d\n", i);
//	}
//}


// 13题
// 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
// 例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。

//void magic_number();
//
//int main()
//{
//	magic_number();
//
//	return 0;
//}
//
//void magic_number()
//{
//	int i;
//	int i_1;
//	int i_2;
//	int i_3;
//	int sum;
//
//	for ( i = 100; i < 1000; i++)
//	{
//		i_1 = i % 10;
//		i_2 = i / 10 % 10;
//		i_3 = i / 100;
//		sum = (int)(pow(i_1, 3) + pow(i_2, 3) + pow(i_3, 3));
//		if (sum == i)
//		{
//			printf("sum: %d\n", sum);
//		}
//	}
//}

