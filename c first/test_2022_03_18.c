#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>




// ���0��999֮������С�ˮ�ɻ������������
//int main()
//{
//	int i = 0;
//	int temp1;
//	int temp2;
//	int temp3;
//
//	for (i; i < 1000; i++)
//	{
//		if (i < 100)
//			continue;
//		temp1 = i / 100;
//		temp2 = (i - temp1 * 100) / 10;
//		temp3 = i % 10;
//		temp3 = temp1 * temp1 * temp1 + temp2 * temp2 * temp2 + temp3 * temp3 * temp3;
//		if (temp3 == i)
//			printf("this is: %d\n", i);
//	}
//}

// ��Sn=a+aa+aaa+aaaa+aaaaa��ǰn��֮��


//int main()
//{
//	int n = 6;
//	int i = 0;
//	int a = 0;
//	int ret = 0;
//	int sum = 0;
//
//	printf("�������������>>>>: ");
//	scanf("%d", &n);
//	printf("�����������>>>>>>: ");
//	scanf("%d", &a);
//
//	for (i; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("������%d,����%d�κ�ĺ�sum:%d", a, n, sum);
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,12 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = (left + right) / 2;
//	int key = 7;
//	int i = 0;
//
//	for (i; i < right; i++)
//	{
//		if (left > right)
//		{
//			printf("key do not in this area/n");
//			break;
//		}
//		else
//		{
//			if (arr[mid] > key)
//			{
//				right = mid;
//				mid = (left + right) / 2;
//			}
//			else if (arr[mid] < key)
//			{
//				left = mid;
//				mid = (left + right) / 2;
//			}
//			else
//			{
//				printf("key is index: %d\n", mid);
//				break;
//			}
//				
//				
//		}		
//	}
//}
