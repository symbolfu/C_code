#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

// time: 2022.04.11

// 1、有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？


//int main()
//{
//	int i, j, k;
//	int num = 0;
//	//int cycle = 0;
//
//	for ( i = 1; i < 5; i++)
//	{
//		for ( j = 1; j < 5; j++)
//		{
//			//if (i == j)
//			//	continue;
//			for ( k = 1; k < 5; k++)
//			{
//				//cycle++;
//				if (i!= j && i != k && j != k)
//				{
//					num++;
//					printf("%d%d%d\n", i, j, k);
//				}
//			}
//		}
//	}
//	printf("have %d numbers\n", num);
//	//printf("have %d cycles", cycle);
//	return 0;
//}


// 2题
//题目：企业发放的奖金根据利润提成。
//利润(I)低于或等于10万元时，奖金可提10% ；
//利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；
//20万到40万之间时，高于20万元的部分，可提成5 % ；
//40万到60万之间时高于40万元的部分，可提成3 % ；
//60万到100万之间时，高于60万元的部分，可提成1.5 % ；
//高于100万元时，超过100万元的部分按1 % 提成。
//从键盘输入当月利润I，求应发放奖金总数？


//int main()
//{
//	double profit;
//	double bonus = 0;
//
//
//	printf("please input profit:");
//	scanf("%lf", &profit);
//
//	if (profit > 1000000)
//	{
//		bonus += (profit - 1000000) * 0.01;
//	}
//
//	if (profit <= 1000000 && profit > 600000)
//	{
//		bonus += (profit - 600000) * 0.015;
//	}
//
//	if (profit <= 600000 && profit > 400000)
//	{
//		bonus += (profit - 400000) * 0.03;
//	}
//
//	if (profit <= 400000 && profit > 200000)
//	{
//		bonus += (profit - 200000) * 0.05;
//	}
//
//	if (profit <= 200000 && profit > 100000)
//	{
//		bonus += (profit - 100000) * 0.075;
//	}
//
//	if (profit <= 100000)
//	{
//		bonus += profit * 0.1;
//	}
//
//	printf("total bonus: %lf", bonus);
//
//	return 0;
//}


// 3 题： 需要理出i,j,m,n,x的关系
// 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

//int main()
//{
//	int i, j, m, n, x;
//
//	for (i = 1; i < 168 / 2 + 1; i++)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			if (i>j && (i+j)%2==0 && (i-j)%2 ==0 )
//			{
//				m = (i + j) / 2;
//				n = (i - j) / 2;
//				x = m * n - 100;
//				printf("%d + 100 = %d * %d\n", x, n, n);
//				printf("%d + 268 = %d * %d\n", x, m, m);
//			}
//		}
//	}
//	return 0;
//}

// 4 题：解决闰年的问题
// 输入某年某月某日，判断这一天是这一年的第几天？
//int main()
//{
//	int day, month, year;
//	int sum = 0;
//
//	printf("请输入年、月、日，格式为：年，月，日（2023，12，10）\n");
//	scanf("%d,%d,%d", &year, &month, &day);
//
//	switch (month)
//	{
//        case 1:sum = 0; break;
//        case 2:sum = 31; break;
//        case 3:sum = 59; break;
//        case 4:sum = 90; break;
//        case 5:sum = 120; break;
//        case 6:sum = 151; break;
//        case 7:sum = 181; break;
//        case 8:sum = 212; break;
//        case 9:sum = 243; break;
//        case 10:sum = 273; break;
//        case 11:sum = 304; break;
//        case 12:sum = 334; break;
//        default:printf("data error"); break;
//	}
//
//    sum = sum + day;
//    // 单独处理闰年
//    if (year % 400 == 0 || (year % 4 && year % 100 != 0))
//    {
//        if (month > 2)
//        {
//            sum++;
//        }
//    }
//    printf("这是这一年的第%d天\n", sum);
//	return 0;
//}


// 5题
// 输入三个整数x,y,z，请把这三个数由小到大输出。

int main()
{
	int x, y, z;
	int temp;
	printf("pls input three numbers(4,3,5):\n");
	scanf("%d,%d,%d", &x, &y, &z);

	// 冒泡算法: 小 --> 大
	if (x > y)
	{
		temp = y;
		y = x;
		x = temp;
	}

	if (x > z)
	{
		temp = z;
		z = x;
		z = temp;
	}

	if (y > z)
	{
		temp = z;
		y = z;
		z = temp;
	}

	printf("从小到大： %d < %d < %d\n", x, y, z);
	return 0;
}


