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
//��׳˷ǵݹ�int F1(n)
//{
//		int i = 0;
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		return ret;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	m = F1(n);
//	printf("%d�Ľ׳���%d\n", n, m);
//	return 0;
//}
//int strlen1(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *i = "abc";
//	int len = strlen1(i);
//	printf("%d\n", len);
//	return 0;
//}
//��������ַ���int changdu(char* str)
//{
//	if (*str != '\0')
//		return 1 + changdu(str + 1);
//	else
//		return 0;
//}
//int reverse_string(char * s)
//{
//	int len = changdu(s);
//	if (len == 1)
//	{
//		return s;
//	}
//	else if (*(s) != '/0')
//	{
//		*(s + len) = *s;
//		*s = *(s + len - 1);
//		*(s + len - 1) = '\0';
//		reverse_string(s + 1); 
//		*(s + len - 1) = *(s + len);
//		*(s + len) = '\0'; 
//	}
//	return s;
//}
//int main()
//{
//	char i[] = "abc";
//	printf("%s\n", reverse_string(i));
//	return 0;
//}
//����һ���Ǹ����������������������֮��int DigitSum(n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	return (n % 10) + DigitSum(n / 10);
//}
//int main()
//{
//	int i = 0;
//flag:
//	scanf("%d", &i);
//	if (i < 0)
//	{
//		printf("���������������\n");
//			goto flag;
//	}
//	printf("%d", DigitSum(i));
//	return 0;
//}
//�ݹ�ʵ��n��k�η�int my_vew(int n, int m)
//{
//	if (m < 2)
//	{
//		return n;
//	}
//	return n * my_vew(n,m - 1);
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("����������������м�ո�\n");
//	scanf("%d%d", &i, &j);
//	printf("%d", my_vew(i, j));
//	return 0;
//}
/*�ݹ鷨��쳲���������ʱ��int Fb(int n)
{
	if (n < 3)
	{
		return 1;
	}
	return Fb(n - 1) + Fb(n - 2);
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	printf("%d", Fb(i));
	return 0;
}*/
int Fb1(int n)
{
	int j = 1, k = 1, m = 1;
	while (n > 2)
	{
		m = j + k;
		j = k;
		k = m;
		n--;
	}
	return m;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	printf("%d", Fb1(i));
	return 0;
}