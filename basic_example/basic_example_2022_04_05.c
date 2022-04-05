#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// add  checker
// care code structure and logic
// every function play acotor;

//long get_long();     // check input is a integer
//// check limits
//bool bad_limits(long begin, long end, long low, long high);
//double sum_squares(long a, long b);
//
//
//int main()
//{
//	const long MIN = -1000000L;
//	const long MAX = +1000000L;
//	long start;
//	long stop;
//	double answer;
//
//	printf("low limit:");
//	start = get_long();            // 自己重新写了一个scanf函数并赋予了它check功能
//	printf("high limit");
//	stop = get_long();
//
//	while (start != 0 || stop != 0)             // 条件给的是退出条件：0 0
//	{
//		if (bad_limits(start, stop, MIN, MAX))        // 判断是否超过输入值范围
//			printf("please try again.\n");
//		else
//		{
//			answer = sum_sequares(start, stop);
//			printf("from %ld to %ld is %g\n", start, stop, answer);
//		}
//		printf("enter the limits(enter 0 for both ""limits to quit): \n");
//		printf("low limit:");
//		start = get_long();
//		printf("high limit");
//		stop = get_long();
//	}
//	printf("Done.\n");
//}
//
//
//long get_long()
//{
//	long input;
//	char ch;
//
//	while (scanf("%ld", &input) != 1)    // 判断输入是否为数字
//	{
//		while ((ch = getchar()) != '\n')
//			putchar(ch);      // 错误输出
//		printf(" is not a integer.\n pls enter an  ");
//		printf("integer value, such as 25, -179, or 3: ");
//	}
//	return input;
//}
//
//double sum_squares(long a, long b)
//{
//	double total;
//	long i;
//
//	for (i = a; i <= b; i++)
//		total += (double)i * (double)i;
//
//	return total;
//}
//
//bool bad_limits(long begin, long end, long low, long high)
//{
//	bool not_good = false;
//
//	if (begin > end)
//	{
//		printf("%ld isn't smaller than %ld.\n", begin, end);
//		not_good = true;
//	}
//
//	if (begin < low || end < low)
//	{
//		printf("values must be %ld or greater.\n", low);
//		not_good = true;
//	}
//
//	if (begin > high || end > high)
//	{
//		printf("values must be %ld or less.\n", high);
//		not_good = true;
//	}
//
//	return not_good;
//}


// 判断约数

//int main()
//{
//	unsigned long num;		// wait check num
//	unsigned long div;		
//	bool isPrime;			// 标记flag输入数字num的类型： 0：约数， 1:素数
//	printf("=============pls enter an integer for analysis========\n ");
//	printf("enter q to quit\n");
//	while (scanf("%lu",&num) == 1)
//	{
//		// 这段代码的核心功能实现部分
//		for (div = 2, isPrime = true; (div * div) <= num; div++)
//		{
//			if (num % div == 0)
//			{
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
//				else
//					printf("%lu is divisible by %lu .\n", num, num / div);
//				isPrime = false;
//			}
//		}
//
//		if (isPrime)							// 防止在num为素数是无任何输出，以为是程序出错，所有特意输出素数提示
//			printf("%lu is prime.\n", num);
//		printf("pls enter another integer for analysis;\n");
//		printf("enter q to quit,\n");
//	}
//	printf("Bye.\n");
//	return 0;


// 统计单词个数
// care how to jude  a word


//#define STOP '|'
//
//int main()
//{
//	char c;
//	char prev;
//	long n_chars = 0L;
//	int n_lines = 0;
//	int n_words = 0;
//	int p_lines = 0;
//	bool inword = false;
//	
//
//	printf("========enter text to be analyzed(| to ternimate)=========");
//	prev = '\n';
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;
//		if (c == '\n')
//			n_lines++;
//
//		if (!isspace(c) && !inword)			// 对一个word计数的定义
//		{
//			inword = true;
//			n_words++;
//		}
//
//		if (isspace(c) && inword)
//			inword = false;
//
//		prev = c;
//	}
//
//	if (prev != '\n')                 // 标记字符中存在STOP符号
//		p_lines = 1;
//	printf("characters = %ldm words = %d, lines = %d \n", n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//
//	return 0;
//}


