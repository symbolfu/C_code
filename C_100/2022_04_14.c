#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// C���Ծ���100��

// 14��
// ��һ���������ֽ�������

// �����������n���зֽ���������Ӧ���ҵ�һ����С������k��Ȼ������������ɣ�

// (1)����������ǡ���ڣ�С�ڵ�ʱ�򣬼���ִ��ѭ����n����˵���ֽ��������Ĺ����Ѿ����������� ��ӡ�����ɡ�
// (2)��n�ܱ�k��������Ӧ��ӡ��k��ֵ������n����k����, ��Ϊ�µ�������n.�ظ�ִ�еڶ�����
// (3)���n���ܱ�k����������k + 1��Ϊk��ֵ, �ظ�ִ�е�һ��

int main()
{
	int n, i;
	printf("pls input a integer:\n");
	scanf("%d", &n);
	printf("inputed integer is %d.\n", n);
	for ( i = 2; i <= n; i++)                  // ȫ�ֱ���n
	{
		while (n % i == 0)     // while �����ǽ�����������ѡ�����磺i= 2ʱ��ʾ2�ı������޳�����������Ϊ�������1��n��֮�������������n����nΪ������
		{
			printf("%d", i);
			n /= i;
			if (n != 1)       //endpoint
			{
				printf("*");
			}
		}
	}
	printf("\n");

	return 0;
}