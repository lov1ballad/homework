#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������ÿһλvoid Output(int n)
//{
//	if (n > 9)
//	{
//		Output(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Output(n);
//	return 0;
//}
//��N�Ľ׳ˣ��ݹ飩int F(int n)
//{
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*F(n - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	m = F(n);
//	printf("%d�Ľ׳���%d\n", n, m);
//	return 0;
//}
int F1(n)
{
		int i = 0;
		int ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		return ret;
}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	m = F1(n);
	printf("%d�Ľ׳���%d\n", n, m);
	return 0;
}