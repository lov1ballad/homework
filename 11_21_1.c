#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
//�����������Լ��int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int j = 0;
//	printf("��������������:");
//	scanf("%d%d", &a, &b);
//	if (a >= b){
//		for (i = b; i >= 1; i--){
//			if (a%i == 0 && b%i == 0){
//				printf("���Լ��Ϊ��%d\n", i);
//				break;
//			}
//		}
//	}
//	else{
//		for (j = a; j >= 1; j--){
//			if (a%j == 0 && b%j == 0){
//				printf("���Լ��Ϊ��%d\n", j);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//1000��2000��֮�������
//int main()
//{
//	int i = 0;
//	printf("1000�굽2000��֮��������У�");
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//100��200�������
//int main()
//{
//	int i = 100, j = 1, k = 2;
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
//1��100֮������˼�������9 
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("1��100֮�������%d��9\n",count);
//	return 0;
//}
//��1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 
//int main()
//{
//	float sum = 0.0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (pow(-1, i + 1)) * 1 / i;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	char arr1[] = "��������ʵ�������!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//�������ʱ��1000ms��
//		system("cls");//ִ��ϵͳ��������
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	Sleep(1000);
//	printf("��hiahiahia~\n");
//
//	return 0;
//}
//��ʮ�����е����ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int MAX = 0;
//	printf("������ʮ������:\n");
//	for(i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	MAX = arr[0];
//	for (i = 0; i <= 9; i++)
//	{
//			if (arr[i] > MAX)
//			{
//				MAX = arr[i];
//			}
//	}
//	printf("%d", MAX);
//	return 0;
//}
//��������Ϸ
//void menu()
//{
//	printf("*******************************\n");
//	printf("****  1. play    0. exit   ****\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	int g = 0;
//	int ret = rand()%100+1;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &g);
//		if (g > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (g < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//�˷��ھ���Ĵ�ӡ
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret = j*i;
//			printf("%d * %d = %d  ", i, j, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int arr[15] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid-1);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}