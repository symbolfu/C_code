#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  10

char* s_gets(char* st, int n);
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};


int main()
{
	struct book library[MAXBKS];
	int count = 0;
	int index, filecount;
	FILE* pbooks;
	int size = sizeof(struct book);

	if ((pbooks = fopen("book.dat", "a+b")) == NULL)
	{
		fputs("can't open book.dat file\n", stderr);
		exit(1);
	}
	rewind(pbooks);
	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	{
		if (count)
		{
			puts("current contents of book.dat:");
		}
		printf("%s by %s : $%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}
	filecount = count;
	if (count == MAXBKS)
	{
		fputs("the book.dat file is full.", stderr);
		exit(2);
	}

	puts("pls add new book titles:");
	puts("press [enter] at the start of a line to stop.");

	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != "\0")
	{
		puts("now enter the author.");
		s_gets(library[count].author, MAXAUTL);
		puts("now enter the value.");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
		{
			continue;
		}
		if (count < MAXBKS)
		{
			puts("enter the next tile.");
		}
	}

	if (count > 0)
	{
		puts("here is the list of your books:");
		for (index = 0; index < count; index++)
		{
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
		}
		fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else
	{
		puts("no books? too bad.\n");
	}
	puts("bye.\n");
	fclose(pbooks);

	return 0;
}


char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != "\n")
			{
				continue;
			}
		}
	}
	return ret_val;
}