#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// �������������


static unsigned long int next = 1;    // ����
unsigned int rand1()
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;          // ����㷨(ħ����ʽ)��ͬʱ���þ�̬��������ѭ��ʹ��
}

void srand1(unsigned int seed)
{
	next = seed;
}

