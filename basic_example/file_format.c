#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 文件操作基本格式

int main()
{
	int ch;
	FILE* fp;
	char arr[] = "hello, welcom the new word!";
	int i = 0;


	fp = fopen("wacky.txt", "w");
	while (arr[i] != '\0')
	{
		putc(arr[i], fp);
		i++;
	}
	if (fclose(fp) != 0)
	{
		printf("error in closing file");
	}

	fp = fopen("wacky.txt", "r");
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	if (fclose(fp) != 0)                
	{
		printf("error in closing file");
	}

	return 0;
}

