#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//==================================================================
// 15题
// 利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，
// 60-89分之间的用B表示，60分以下的用C表示。

//int main()
//{
//	int score;
//
//	puts("pls input student score(exit: input q):");
//	while (scanf("%d", &score) != 0)
//	{
//		if (score >= 90)
//			puts("A");
//		else if (score >= 60)
//			puts("B");
//		else
//			puts("C");
//		puts("pls input student score(exit: input q):");
//	}
//		
//	return 0;
//}



//==================================================================

// 16 题
// 输入两个正整数m和n，求其最大公约数和最小公倍数
// 如果数a能被数b整除，a就叫做b的倍数，b就叫做a的约数

//int main()
//{
//	int m;
//	int n;
//	int i;
//	int com_num;
//	int mx_num;
//
//	scanf("%d,%d", &m, &n);
//
//	for ( i = 1; i <= n; i++)
//	{
//		if (i > n || i > m)
//			break;
//
//		if (n % i == 0 && m % i ==0)
//		{
//			com_num = i;
//		}
//	}
//	mx_num = m * n / com_num;
//
//	printf("%d\n", com_num);
//	printf("%d", mx_num);
//	return 0;
//}

// 算法二
// 原理： gcd(a,b) = gcd(b, a mod b)

int main()
{
	int a, b, t, r, n;

	printf("请输入两个数字：\n");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	r = a % b;
	n = a * b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	printf("这两个数的最大公约数是%d，最小公倍数是%d\n", b, n / b);
	return 0;
}