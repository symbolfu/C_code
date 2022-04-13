#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// C语言经典100例

// 14题
// 将一个正整数分解质因数

// 程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：

// (1)如果这个质数恰等于（小于的时候，继续执行循环）n，则说明分解质因数的过程已经结束，另外 打印出即可。
// (2)但n能被k整除，则应打印出k的值，并用n除以k的商, 作为新的正整数n.重复执行第二步。
// (3)如果n不能被k整除，则用k + 1作为k的值, 重复执行第一步

int main()
{
	int n, i;
	printf("pls input a integer:\n");
	scanf("%d", &n);
	printf("inputed integer is %d.\n", n);
	for ( i = 2; i <= n; i++)                  // 全局变量n
	{
		while (n % i == 0)     // while 处理是进行了素数遴选：例如：i= 2时表示2的倍数都剔除；素数含义为：如果（1，n）之间的数不能整除n，即n为素数；
		{
			printf("%d", i);
			n /= i;
			if (n != 1)       //endpoint
			{
				printf("*");
			}
		}
	}
	printf("\n");

	return 0;
}