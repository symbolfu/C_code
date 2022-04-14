#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 生成随机数
// 可移植版

extern unsigned int rand0();
extern unsigned int rand1();
extern void srand1();

int main()
{
	int count;
	unsigned seed;

	printf("pls enter your choice for seed:\n");
	while (scanf("%u", &seed) == 1)
	{
		srand1(seed);
		for (count = 0; count < 5; count++)
		{
			printf("%d\n", rand0());
		}
		printf("pls enter next seed (q to quit):\n");
	}
	printf("done\n");

	return 0;
}