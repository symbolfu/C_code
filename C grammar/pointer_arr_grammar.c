#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// pointer�Ļ���ʹ��
// ��������ֵ�Ľ���


//void interchange(int* u, int* v);
//
//int main()
//{
//	int x = 5, y = 10;
//	printf("originaly x = %d and y = %d.\n", x, y);
//	interchange(&x, &y);            // ����ַ���͸�����
//	printf("now x = %d and y = %d,\n", x, y);
//	return 0;
//}
//
//void interchange(int* u, int* v)        // ����pointer��������ַ�����ݵ���������* ָ�������  , pointer���ڱ����ַ
//{
//	int temp;
//	temp = *u;
//	*u = *v;
//	*v = *u;
//}


//#define SIZE 4
//
//int main()
//{
//	int dates[SIZE] = { 12,13,14,15 };
//	int* pti;
//	short index;
//	int bills[SIZE] = {1,2,3,4};
//	int* ptf;
//
//	pti = dates;
//	ptf = bills;
//	printf("%23s  %15s\n", "short", "double");
//	for ( index = 0; index < SIZE; index++)
//	{
//		printf("pointer + %d: %10p  %10p\n", index, pti + index, ptf + index);
//		printf("value + %d: %d  %d\n", index, *(pti + index), *(ptf + index));
//	}
//}



//// ָ���ʹ��
//
//#define MONTHS 5
//
//int main()
//{
//	int days[MONTHS] = {31, 28, 31,30, 31};
//	int index;
//	
//	for (index = 0; index < MONTHS; index++)
//	{
//		printf("month %2d has %d days.\n", index + 1, *(days+index));
//	}
//
//	return 0;
//}
//



// һԪ��������˳��
// ָ�������е����ȼ�

//int data[2] = { 100, 200 };
//int moredata[2] = { 300, 400 };
//
//int main()
//{
//	int* p1, * p2, * p3;
//	p1 = p2 = data;
//	p3 = moredata;
//
//	printf(" *p1 = %d, *p2 = %d,   *p3 = %d\n", *p1, *p2, *p3);
//	printf(" *p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (* p3)++);
//	printf(" *p1 = %d, *p2 = %d,   *p3 = %d\n", *p1, *p2, *p3);
//
//	return 0;
//}



// pointer ���ò�����ʽ

//
//int main()
//{
//	int urn[5] = { 100, 200, 300, 400, 500 };
//	int* ptr1, * ptr2, * ptr3;
//
//	ptr1 = urn;
//	ptr2 = &urn[2];
//	printf("pointer value, dereferenced pointer, pointer address:\n");
//	printf("=================================\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	ptr3 = ptr1 + 4;
//	printf("=================================\n");
//	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4,*(ptr1+4));
//	ptr1++;
//	printf("==================================\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1,*ptr1, &ptr1);
//	ptr2--;
//	printf("==================================\n");
//	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//	--ptr1;
//	++ptr2;
//	printf("==================================\n");
//	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
//	printf("==================================\n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
//	printf("==================================\n");
//	printf("ptr3 = %p, ptr3 -2 = %p\n", ptr3, ptr3 - 2);
//	
//	return 0;
//}

// ��άarr
int main()
{
	int zip[4][2] = { {2, 4}, {6, 8}, {1, 3} };

	printf("===================1====================\n");
	printf("zip = %p, zip +1 = %p\n", zip, zip + 1);

	printf("===================2====================\n");
	printf("zip[0] = %p, zip[0] +1 = %p\n", zip[0], zip[0] + 1);

	printf("===================3====================\n");
	printf("*zip = %p, *zip +1 = %p\n", *zip, *zip + 1);

	printf("===================4====================\n");
	printf("zip[0][0] = %d\n", zip[0][0]);

	printf("===================5====================\n");
	printf("*zip[0] = %d\n", *zip[0]);

	printf("===================6====================\n");
	printf("**zip = %d\n", **zip);

	printf("===================7====================\n");
	printf("zip[2][1] = %d\n", zip[2][1]);

	printf("===================8====================\n");
	printf("*(*(zip+2)+1) = %d\n", *(*(zip + 2) + 1));

	return 0;
}
