#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// c���Ծ���100��

// 6��
// ��*�������ĸC��ͼ��
//
//int main()
//{
//	printf("��*�������ĸc��\n");
//	printf(" ****\n");
//	printf(" *\n");
//	printf(" *\n");
//	printf(" ****\n");
//
//
//	return 0;
//}


// 7��
// �������ͼ��

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


// 8��
// ���9*9�ھ�

//int main()
//{
//	int i;
//	int j;
//
//	printf("��ӡ9*9�˷��ھ���\n");
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


// 9��
// Ҫ�����������������
//��������������64���ڰ����ĸ�����ɣ���Ϊ8��*8�С���i�����У�j�������У�����i+j�ĺ͵ı仯����������ڷ��񣬻��ǰ׷���

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



// 10��
// ��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����

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


// 11 ��
// ��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ�
// �������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
// 1,1,2,3,5,8
// 쳲���ȥ����

//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i;
//	int temp = 0;
//
//	printf("��1�����ܹ���%d������\n", b);
//	printf("��1�����ܹ���%d������\n", b);
//
//	for ( i = 3; i < 40; i++)
//	{
//		temp = a + b;
//		a = b;
//		b = temp;
//		printf("��%d�����ܹ���%d������\n", i, temp);
//	}
//
//	return 0;
//}


// 12 ��
// �ж� 101 �� 200 ֮���������

//void number_put(int start, int end);
//
//int main()
//{
//	int start;
//	int end;
//
//	printf("�����������֣�12��25�������������֮���������\n");
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


// 13��
// ��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
// ���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���

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

