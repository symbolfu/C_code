#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

// time: 2022.04.11

// 1����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�


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


// 2��
//��Ŀ����ҵ���ŵĽ������������ɡ�
//����(I)���ڻ����10��Ԫʱ���������10% ��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10% ��ɣ�����10��Ԫ�Ĳ��֣������7.5 % ��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5 % ��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3 % ��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5 % ��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1 % ��ɡ�
//�Ӽ������뵱������I����Ӧ���Ž���������


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


// 3 �⣺ ��Ҫ���i,j,m,n,x�Ĺ�ϵ
// һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�

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

// 4 �⣺������������
// ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//int main()
//{
//	int day, month, year;
//	int sum = 0;
//
//	printf("�������ꡢ�¡��գ���ʽΪ���꣬�£��գ�2023��12��10��\n");
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
//    // ������������
//    if (year % 400 == 0 || (year % 4 && year % 100 != 0))
//    {
//        if (month > 2)
//        {
//            sum++;
//        }
//    }
//    printf("������һ��ĵ�%d��\n", sum);
//	return 0;
//}


// 5��
// ������������x,y,z���������������С���������

int main()
{
	int x, y, z;
	int temp;
	printf("pls input three numbers(4,3,5):\n");
	scanf("%d,%d,%d", &x, &y, &z);

	// ð���㷨: С --> ��
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

	printf("��С���� %d < %d < %d\n", x, y, z);
	return 0;
}


