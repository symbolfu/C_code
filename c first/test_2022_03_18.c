#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>




// 求出0～999之间的所有“水仙花数”并输出。
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

// 求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和


//int main()
//{
//	int n = 6;
//	int i = 0;
//	int a = 0;
//	int ret = 0;
//	int sum = 0;
//
//	printf("请输入迭代次数>>>>: ");
//	scanf("%d", &n);
//	printf("请输入迭代数>>>>>>: ");
//	scanf("%d", &a);
//
//	for (i; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("迭代数%d,迭代%d次后的和sum:%d", a, n, sum);
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
