#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// ��c primer plus��
// ������ϰ�ⲿ��


// 1.��ӡ�����е�26��Сд��ĸ



//int main()
//{
//	char arr[26];
//	int i = -1;
//	int j = -1;
//	const int a_index = 97;
//
//	while (++i < 26)			// ����26��Сд��ĸ��������
//		arr[i] = a_index + i;		
//
//	while (++j < 26)			// ��ӡ�����е�����
//		printf("%c\n", arr[j]);
//
//	return 0;
//}

#define SIZE 26

//int main()
//{
//	char arr[SIZE];
//	int i;
//
//	for ( i = 0; i < SIZE; i++)
//		arr[i] = 'a' + i;
//
//	for (i = 0; i < SIZE; i++)
//		printf("%c \n", arr[i]);
//
//	return 0;
//}

// ��ӡ����ͼ��״
// #
// ##
// ###
// ####


//int main()
//{
//	int i;
//	int j;
//	int num;
//	scanf("%d", &num);
//
//	for ( i = 1; i < num; i++)    // ��ͬ�е����ݿ���
//	{
//		for (j = 1; j <= i; j++)      // ����һ���ڵ��������
//		{
//			printf("#");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num;
//	int i, j;
//
//	scanf("%d", &num);
//	char start_ascii = 'A' + num -1;
//
//	for ( i = 0; i < num; i++)
//	{
//		for ( j = 0; j <= i; j++)
//		{
//			printf("%c", start_ascii - j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// #define LET 'Z'

//int main()
//{
//	char start;
//	char end;
//
//	for (end = LET; end >= 'A'; end--)
//	{
//		for (start = LET; start >= end; start--)
//			printf("%c", start);
//		printf("\n");
//	}
//	return 0;
// }

// ��ӡ������ʽ
// A
// BC
// DEF

//#define LET 'U'
//
//int main()
//{
//	int i;
//	int j;
//	char start = 'A';
//
//	for (i = 0; i < 6; i++)
//	{
//		 start += i;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c", start + j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ��ӡ���½ṹ: ������Eʱ
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

//int main()
//{
//	char target_char;
//	char end;
//	char start;
//
//	scanf("%c", &target_char);
//
//	for ( start = 'A'; start <= target_char; start++)
//	{
//		for (end = 'A'; end < start; end++)
//		{
//			printf("%c", end);
//		}
//		for ( end = start; end >= 'A'; end--)
//		{
//			printf("%c", end);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// ��ӡһ������ƽ��������

//int main()
//{
//	int limit_u;
//	int limit_l;
//	int i;
//
//	scanf("%d", &limit_l);
//	scanf("%d", &limit_u);
//	printf("interger    interger^2     interger^3\n");
//
//	for ( i = limit_l; i <= limit_u; i++)
//		printf("%2d  %10d     %14d\n", i, i * i, i * i * i);
//
//	return 0;
//}

// �����ӡ����

//int main()
//{
//	
//	char arr[] = "abcdef";
//	int i;
//	int length = strlen(arr);
//	char temp;
//
//	for ( i = 0; i < length; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < length / 2; i++)
//	{
//		int index = length -1 - i;
//		temp = arr[i];
//		arr[i] = arr[index];
//		arr[index] = temp;
//	}
//
//	for (i = 0; i < length; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


int main()
{
	float num_f;
	float num_s;
	float ret;
	while (scanf("%f %f", &num_f, &num_s) == 2)
	{
		ret = (num_f - num_s) / (num_f * num_s);
		printf("(%.2f - %.2f)/(%.2f * %.2f) = %.2f\n", num_f, num_s, num_f, num_s, ret);
	}
	return 0;
}
