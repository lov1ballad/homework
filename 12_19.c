#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void myqsort(void * base, size_t nitems, size_t size, int(*compar)(const void *, const void *))
//{
//	int i, j;
//	char * st = (char *)base; 
//	char tmp[16];
//
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++)
//		{
//			if (compar(st + j * size, st + (j + 1) * size)) 
//			{
//				memcpy(tmp, st + j * size, size); 
//				memcpy(st + j * size, st + (j + 1) * size, size);
//				memcpy(st + (j + 1) * size, tmp, size);
//			}
//		}
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <string.h>
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void mysort(
//	void* arr,
//	size_t sz,
//	size_t width,
//	int(*cmp)(const void*e1, const void*e2)
//	)
//{
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr + j*width, (char*)arr + (j + 1)*width)>0)
//			{
//				Swap((char*)arr + j*width, (char*)arr + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//struct stu
//{
//	char name;
//	int age;
//};
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//void test1()//整型排序
//{
//	int arr[10] = { 3, 1, 5, 2, 4, 9, 8, 7, 6, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	mysort(arr, sz, 4, cmp_int);
//	print(arr, sz);
//}
//
//void test2()//结构体排序
//{
//	struct stu s[3] = { {"lijilong",20}, {"renchenhui",21}, {"baizhiqiang",22} };
//	mysort(s, sizeof(struct stu), 4, cmp_stu_by_name);
//
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//杨氏矩阵
#include <stdio.h>
#define ROW 3
#define COL 4
int Find(int arr[ROW][COL], int *row, int *col, int n)
{
	*row = 0;
	*col = COL - 1;
	while ((*row < ROW) && (*col >= 0))
	{
		if (arr[*row][*col] > n)
		{
			(*col)--;
		}
		else if (arr[*row][*col] < n)
		{
			(*row)++;
		}
		else
			return 1;
	}
	return 0;
}
int main()
{
	int arr[ROW][COL] = { { 1, 2, 3, 4 }, { 5, 7, 9, 10 }, { 21, 37, 46, 98 } };
	int input = 0;
	int row = 0;
	int col = 0;
	printf("请输入一个整数：");
	scanf("%d", &input);
	int ret = Find(arr, &row, &col, input);
	if (ret == 1)
	{
		printf("row = %d,col = %d\n", row, col);
	}
	else
	{
		printf("Not found\n");
	}
	return 0;
}