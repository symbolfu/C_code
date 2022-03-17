#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


// 计算1！+...+ 10!

//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i; i < 11; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("sum: %d", sum);
//}


// 二分查找：在一个有序序列中找到已知一个数字
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("find: %d", mid);
//	else
//		printf("no find!!!!!!!!!!");
//}

// function的方式实现
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left + right) >> 1;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//
//	printf("find number index: %d", bin_search(arr, left, right, key));
//
//	return 0;
//}


//void menu()
//{
//	printf("*****************************\n");
//	printf("**********  1.play  ******** \n");
//	printf("*********** 0.exit **********\n");
//	printf("*****************************\n");
//}
//
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>>>: ");
//		scanf("%d", &input);
//		if (input > random_num)
//			printf("猜大了\n");
//		else if (input < random_num)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你， 猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));   // set random number generator
//	do
//	{
//		menu();
//		printf("请选择>>>:  ");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//			break;
//		default:
//		{
//			printf("选择错误，请重新输入！ \n");
//			break;
//		}
//		}
//	} while (input);
//	return 0;
//}


// 判断一定范围内的素数
//int main()
//{
//	int left = 100;
//	int right = 200;
//
//	while (1)
//	{
//		scanf("%d", &left);
//		scanf("%d", &right);
//		if (left < right)
//		{
//			printf("input data is ok!!!!\n");
//			break;
//		}
//			
//	}
//
//	for (left; left < right; left++)
//	{
//		if (left % 2 == 1)
//			printf("%d  ", left);
//	}
//}

// 打印乘法口诀表
//int main()
//{
//	int i = 1;
//	int j = 1;
//
//	for (i; i < 10; i++)
//	{
//		j = 1;
//		for (j; j < i + 1; j++)
//		{
//			printf("%d * %d = %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*****************************************************/
/*******************2022/03/17***********************/
/*******************day02.txt************************/

// 给定两个整数变量的值，将两个值的内容进行交换

//int main()
//{
//	int a = 100;
//	int b = 200;
//	int temp = 0;
//
//	printf("a: %d", a);
//	printf("b: %d", b);
//	printf("\n");
//
//	temp = a;
//	a = b;
//	b = temp;
//
//	printf("a: %d", a);
//	printf("b: %d", b);
//
//	return 0;
//}


// 求arr中最大的数
//int main()
//{
//	int arr[] = { 12,15,1,3,2,4,7,98,101 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int i = 1;
//
//	printf("length: %d\n", length);
//
//	for (i; i < length; i++)
//	{
//		if (arr[0] < arr[i])
//			arr[0] = arr[i];
//	}
//	printf("arr max: %d\n", arr[0]);
//	printf("arr recycle numb: %d\n", i);
//}


// 将三个数按从大到小输出

int main()
{
	int a = 100;
	int b = 42;
	int c = 324;

	if (a > b)
	{
		if (a > c)
		{
			printf("max: %d\n", a);
			if (b > c)
			{
				printf("second: %d\n", b);
				printf("third: %d\n", c);
			}
			else
			{
				printf("second: %d\n", c);
				printf("third: %d\n", b);
			}
		}
		else
		{
			printf("max: %d", c);
			if (a > b)
			{
				printf("second: %d\n", a);
				printf("third: %d\n", b);
			}
			else
			{
				printf("second: %d\n", b);
				printf("third: %d\n", c);
			}
		}
			
	}
}




