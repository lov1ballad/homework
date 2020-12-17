#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//

//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//模拟实现strlen
//#define N 100
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*(arr++) != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char *arr[N] = {0};
//	gets(arr);
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//模拟实现strcpy
//#include<assert.h>
//#define N 100
//char* my_strcpy(char* arr1, const char* arr)
//{
//	char* ret = arr1;
//	assert(arr1 != NULL);
//	assert(arr != NULL);
//
//	while (*arr1++ = *arr++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char* str[N] = { 0 };
//	char* str1[N] = { 0 };
//	gets(str);
//	my_strcpy(str1, str);
//	printf("%s\n", str1);
//	return 0;
//}

//调整数组里元素奇数都位与偶数前
void Switch(int *arr, int num)
{
	int *start = arr;
	int *end = arr + num - 1;
	while (start < end)
	{
		while (start < end && (*start & 1))
		{
			start++;
		}
		while (start< end && (!(*end & 1)))
		{
			end--;
		}
		if (start < end)
		{
			*start ^= *end;
			*end ^= *start;
			*start ^= *end;
			start++;
			end--;
		}
	}

	for (int i = 0; i < num; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Switch(arr, num);
	return 0;
}