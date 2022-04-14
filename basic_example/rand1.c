#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 产生随机数方法


static unsigned long int next = 1;    // 种子
unsigned int rand1()
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;          // 随机算法(魔术公式)，同时利用静态变量进行循环使用
}

void srand1(unsigned int seed)
{
	next = seed;
}

