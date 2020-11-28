#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//输出素数int main()
//{
//	int i = 100, j = 1, k = 2;
//
//
//	for (i = 100; i <= 200; i++)
//	{
//		j = (int)sqrt(i);
//		for (k = 2; k <= j; k++)
//		{
//			if (i%k == 0)
//			{
//				break;
//			}
//			if (k == j)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
//判断闰年int main()
//{
//	int year = 0;
//	printf("请输入年份：\n");
//	scanf("%d", &year);
//	if ((year % 100 != 0) && (year % 4 == 0))
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//
//	return 0;
//}
//void swap(int *x,int *y)
//{
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	int i;
//	int j;
//	scanf("%d,%d", &i,&j);
//	printf("交换前i=%d   j=%d\n", i, j);
//	swap(&i,&j);
//	printf("交换后i=%d   j=%d", i, j);
//	return 0;
//}
int main()
{
		int i = 0;
		int j = 0;
		int ret = 0;
		int n = 0;
		scanf("%d", &n);
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				ret = j*i;
				printf("%d * %d = %d  ", i, j, ret);
			}
			printf("\n");
		}
	return 0;
}