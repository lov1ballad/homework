#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i, j, t, a[11];
//	printf("������10������\n");
//	for (i = 1; i<11; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i<10; i++)
//	for (j = 1; j<11 - i; j++)
//	if (a[j]>a[j + 1])
//	{
//		t = a[j];
//		a[j] = a[j + 1];
//		a[j + 1] = t;
//	}
//	printf("������˳���ǣ�\n");
//	for (i = 1; i <= 10; i++)
//		printf("%5d", a[i]);
//	printf("\n");
//	return 0;
//}
//void init(int* n, int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		*(n + i) = 0;
//	}
//}
//void print(int* k, int n)
//{
//	for (int x = 0; x < n; x++)
//	{
//		printf("%d ", *(k + x));
//	}
//	printf("\n");
//}
//void reverse(int* k, int n)
//{
//	int end = n-1, start = 0, m = 0;
//	while (start<end)
//	{
//		m = *(k + start);
//		*(k + start) = *(k + end);
//		*(k + end) = m;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	int arr[10];
//	init(arr,10);//��ʼ��
//	int len = 0;
//	len = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, len);//����
//	print(arr,len);//��ӡ����
//	return 0;
//}
void HA()
{
	printf("\n");
}
void print(int* k, int n)
{
	for (int x = 0; x < n; x++)
	{
		printf("%d ", *(k + x));
	}
	HA();
}
int main()
{
		int i, n = 0;
		int A[10];
		int B[10];
		int t[10];
		printf("�����������С��");
		scanf("%d", &n);
		HA();
		printf("����������A��");
		for (i = 0; i<n; i++)
		{
			scanf(" %d", &A[i]);
		}
		HA();
		printf("����������B��");
		for (i = 0; i<n; i++)
		{
			scanf(" %d", &B[i]);
		}
		HA();
		for (i = 0; i<n; i++)
		{
			t[i] = A[i];
			A[i] = B[i];
			B[i] = t[i];
		}
		print(A, n);
		HA();
		print(B, n);
		HA();
		return 0;
}