#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//==================================================================
// 15��
// ���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
// 60-89��֮�����B��ʾ��60�����µ���C��ʾ��

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

// 16 ��
// ��������������m��n���������Լ������С������
// �����a�ܱ���b������a�ͽ���b�ı�����b�ͽ���a��Լ��

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

// �㷨��
// ԭ�� gcd(a,b) = gcd(b, a mod b)

int main()
{
	int a, b, t, r, n;

	printf("�������������֣�\n");
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
	printf("�������������Լ����%d����С��������%d\n", b, n / b);
	return 0;
}