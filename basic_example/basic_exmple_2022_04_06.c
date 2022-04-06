#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// 模拟菜单选项


char get_choice();               // 输入选项
char get_first();                // get 一行中的首字符
int get_int();                  // 输入一个整数
void count();                   // 一个功能函数

int main()
{
	char choice;
	//void count();

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a': printf("buy low, sell high.\n");
			break;
		case 'b': putchar('\a');
			break;
		case 'c': count();
			break;
		default: printf("program error!\n");
		}
	}
	printf("Bye.\n");
	return 0;
}


void count()
{
	int n, i;
	printf("count how far ? enter an integer:\n");
	n = get_int();
	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	while (getchar() != '\n')
	{
		continue;
	}
}

char get_choice()
{
	int ch;
	printf("enter the letter of your choice:\n");
	ch = get_first();
	while ((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("pls respond with a, b,c, or q.\n");
		ch = get_first();
	}
	return ch;
}

char get_first()
{
	int ch;
	ch = getchar();
	while (getchar() != '\n')            // define： one line have only 1 character
	{
		continue;
	}
	return ch;
}

int get_int()
{
	int input;
	char ch;
	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}
		printf("is not an integer.\n pls enter an  ");
		printf("integer value, such as 25 , -132 or 3: ");
	}
	return input;
}