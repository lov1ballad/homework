#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("��������������:");
	scanf("%d%d", &a, &b);
	if (a >= b){
		int i = 0;
		for (i = b; i >= 1; i--){
			if (a%i == 0 && b%i == 0){
				printf("���Լ��Ϊ��%d\n", i);
				break;
			}
		}
	}
	else{
		int j = 0;
		for (j = a; j >= 1; j--){
			if (a%j == 0 && b%j == 0){
				printf("���Լ��Ϊ��%d\n", j);
				break;
			}
		}
	}
	return 0;
}