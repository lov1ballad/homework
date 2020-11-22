#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
//两个数的最大公约数int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入两个整数:");
//	scanf("%d%d", &a, &b);
//	if (a >= b){
//		for (i = b; i >= 1; i--){
//			if (a%i == 0 && b%i == 0){
//				printf("最大公约数为：%d\n", i);
//				break;
//			}
//		}
//	}
//	else{
//		for (j = a; j >= 1; j--){
//			if (a%j == 0 && b%j == 0){
//				printf("最大公约数为：%d\n", j);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//1000到2000年之间的闰年
//int main()
//{
//	int i = 0;
//	printf("1000年到2000年之间的闰年有：");
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//100到200间的素数
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
//1到100之间出现了几个数字9 
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
//	printf("1到100之间出现了%d个9\n",count);
//	return 0;
//}
//求1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 
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
//	char arr1[] = "李美玉真实身份是猪!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//这个是延时，1000ms；
//		system("cls");//执行系统命令的清除
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	Sleep(1000);
//	printf("哈hiahiahia~\n");
//
//	return 0;
//}
//求十个数中的最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int MAX = 0;
//	printf("请输入十个整数:\n");
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
//猜数字游戏
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
//		printf("请猜数字:>");
//		scanf("%d", &g);
//		if (g > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (g < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//乘法口诀表的打印
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
			printf("找到了，下标是：%d\n", mid-1);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}