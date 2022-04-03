#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


//
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("a:%d; b:%d", a, b);
//	return 0;
//}



//int main()
//{
//	float weight = 1.000000;
//	int value;
//	value = weight;
//	printf("%d",sizeof(value));
//
//	//printf("are you worth you weight in platinum?\n");
//	//printf("let's check it out.\n");
//	//printf("please enter your weight in pounds: ");
//	//scanf("%f", &weight);
//	//printf("%d",value);                // 
//}


//
//int main()
//{
//	int x = 100;
//	printf("dec = %d, octal = %o, hex = %x", x, x, x);
//	printf("dec = %d, octal = %#o, hex = %#x", x, x, x);
//	printf("Hello!");
//	return 0;
//}

//int main()
//{
//	char a[10];
//	int c;
//	scanf("%s", a);
//	printf("%s\n", a);
//	c = strlen(a);
//	printf("%d\n",c);
//	for (int i = 0; i < c; i++)
//	{
//		printf("%s\n", a[i]);
//	}
//	
//	return 1;
//}



//int main()
//{
//	int a;
//	int b;
//	scanf("%d,%d", &a, &b);
//	printf("a: %d; b: %d", a, b);
//	return 0;
//}

// 指数增长

//#define SQUARE 64
//
//int main()
//{
//	const double CROP = 2E16;
//	double current, total;
//	int count = 1;
//	printf("============START===============\n");
//	printf("sequare grains total\n");
//
//	total = current = 1.0;
//
//	while (count < SQUARE)
//	{
//		count += 1;
//		current = 2.0 * current;
//		total += current;
//		printf("%4d  %13.2e  %12.2e   %12.2e\n", count, current, total, total / CROP);
//	}
//	printf("=============END==================");
//	return 0;
//}


// ++a, a++ test

//int main()
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//	a_post = a++;
//	pre_b = ++b;
//	printf("a    a_post     b    pre_b  \n");
//	printf("%1d  %5d   %5d   %5d\n", a, a_post, b, pre_b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	float n;
//	printf("watch out! here come a bunch of fraction\n");
//	
//	while (i++ < 30)
//	{
//		n = 1 / i;
//		printf("%f\n", n);
//	}
//	printf("that's all, folks\n");
//	return 0;
//}




//int main()
//{
//	long num;
//	long sum = 0L;
//	int status;
//	printf("pls enter an integer to be summed ");
//	printf("(q to quit):");
//	status = scanf("%ld", &num);		// when scanf return 0, input is in buffer,next input is this value.
//	printf("status: %d", status);       
//	while (status = 1)					// this is error
//	{
//		sum += num;
//		printf("pls enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("those integers sum to %ld.\n", sum);
//
//	return 0;
//}


//int main()
//{
//	long num;
//	long sum = 0L;
//	_Bool status;
//	printf("pls enter an integer to be summed ");
//	printf("(q to quit):");
//	status = scanf("%ld", &num);		// when scanf return 0, input is in buffer,next input is this value.
//	printf("status: %d\n", status);
//	while (status)					// this is error
//	{
//		sum += num;
//		printf("pls enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("those integers sum to %ld.\n", sum);
//
//	return 0;
//}



//int main()
//{
//	int num;
//	printf("   n    n cube\n");
//	for (num = 0; num < 6; num++)
//	{
//		printf("%5d %5d\n", num, num * num * num);
//	}
//	return 0;
//}



//int main()
//{
//	int i;
//	int n = 1;
//	const double c = 1;
//	double sum = 0;
//	
//	for ( i = 1; i < 10; i++)
//	{
//		sum += c/n;
//		n = n << 1;
//	}
//	printf("sum: %f\n", sum);
//	return 0;
//}


// arr use

#define SIZE 10
#define PAR  72

//int main()
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float avg;
//
//	printf("enter %d golf scores:\n", SIZE);
//
//	for ( index = 0; index < SIZE; index++)       // repeat read data for arr
//	{
//		scanf("%d", &score[index]);
//	}
//	printf("the scores read in are as follows:\n");
//
//	for ( index = 0; index < SIZE; index++)			// repeat printf data for arr
//	{
//		printf("%5d", score[index]);
//	}
//	printf("\n");
//
//	for ( index = 0; index < SIZE; index++)
//	{
//		sum += score[index];
//	}
//	avg = (float)sum / SIZE;
//	printf("sum of scores = %d, avg = %2f\n", sum, avg);
//	return 0;
//}

//int main()
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float avg;
//
//	printf("enter %d golf scores:\n", SIZE);
//
//	for (index = 0; index < SIZE; index++)       // repeat read data for arr
//	{
//		scanf("%d", &score[index]);
//		printf("%5d", score[index]);
//		sum += score[index];
//
//	}
//
//	avg = (float)sum / SIZE;
//	printf("sum of scores = %d, avg = %2f\n", sum, avg);
//
//	return 0;
//}


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
//}

//#define PERIOD '.'
//
//int main()
//{
//	char ch;
//	int charcount = 0;
//	
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '"' && ch != '\'')
//		{
//			charcount++;
//			printf("%c \n", ch);
//		}
//	}
//	printf("%d \n", charcount);
//	return 0;
//}


// 统计单词的程序



#define STOP '|'

int main()
{
	char c;
	char prev;
	long n_chars = 0L;
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0;
	bool inword = false;
	

	printf("========enter text to be analyzed(| to ternimate)=========");
	prev = '\n';
	while ((c = getchar()) != STOP)
	{
		n_chars++;
		if (c == '\n')
			n_lines++;

		if (!isspace(c) && !inword)			// 对一个word计数的定义
		{
			inword = true;
			n_words++;
		}

		if (isspace(c) && inword)
			inword = false;

		prev = c;
	}

	if (prev != '\n')                 // 标记字符中存在STOP符号
		p_lines = 1;
	printf("characters = %ldm words = %d, lines = %d \n", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);

	return 0;
}