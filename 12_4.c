#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//打印二进制偶数位和奇数位int main()
//{
//	int n;
//	printf("请输入一个十进制数：\n");
//	scanf("%d", &n);
//	int arr[] = { 0 };
//	unsigned int i = 1u << 31;//初始化i=1,后面的u表示的就是unsigned
//	unsigned int j = 1u << 31;
//	printf("偶数位：");
//	for (; i; i >>= 2) 
//	{
//		printf("%d", n&i ? 1 : 0);
//	}
//	printf("\n");
//	unsigned int k = j >> 1;
//	printf("奇数位：");
//	for (; k; k >>= 2)
//	{
//		printf("%d", n&k ? 1 : 0);
//	}
//	printf("\n");
//	return 0;
//}
//两个整数二进制位不同数int diff(int m, int n)
//{
//	int tmp = m^n;//按位异或一下
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m, n;
//	while (1)
//	{
//		scanf("%d %d", &m, &n);
//		printf("%d\n", diff(m, n));
//	}
//	return 0;
//}
//统计整数二进制中1的个数int Count1(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Count1(n));
//	return 0;
//}
//不使用中间变量交换两个整数值int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前：%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}
long long fun(long long n)
{
	return 1 << n;
}
int main()
{
	long long n = 0;
	scanf("%d", &n);
	printf("2的%d次方为%d", n, fun(n));
	return 0;
}