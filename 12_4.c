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
//��ӡ������ż��λ������λint main()
//{
//	int n;
//	printf("������һ��ʮ��������\n");
//	scanf("%d", &n);
//	int arr[] = { 0 };
//	unsigned int i = 1u << 31;//��ʼ��i=1,�����u��ʾ�ľ���unsigned
//	unsigned int j = 1u << 31;
//	printf("ż��λ��");
//	for (; i; i >>= 2) 
//	{
//		printf("%d", n&i ? 1 : 0);
//	}
//	printf("\n");
//	unsigned int k = j >> 1;
//	printf("����λ��");
//	for (; k; k >>= 2)
//	{
//		printf("%d", n&k ? 1 : 0);
//	}
//	printf("\n");
//	return 0;
//}
//��������������λ��ͬ��int diff(int m, int n)
//{
//	int tmp = m^n;//��λ���һ��
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
//ͳ��������������1�ĸ���int Count1(int n)
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
//��ʹ���м����������������ֵint main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������%d %d\n", a, b);
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
	printf("2��%d�η�Ϊ%d", n, fun(n));
	return 0;
}