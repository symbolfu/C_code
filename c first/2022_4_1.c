#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


// 二分查找：函数方式实现

// define binary_search function
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int ze = sizeof(arr) / sizeof(arr[0]);

	// call binary_search function
	int ret = binary_search(arr, key, ze);
	if (-1 == ret)
	{
		printf("not find");
	}
	else
	{
		printf("find index: %d",ret);
	}
}
