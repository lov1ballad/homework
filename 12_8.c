#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	short *p = (short*)arr;
	int i = 0;
	for (i = 0; i<4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/
//arr�������ڴ��еĴ洢��ʽΪ��
//0x00ECFBF4:  01 00 00 00
//0x00ECFBF8 : 02 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//ָ��p������Ϊshort*���͵ģ����pÿ��ֻ�����������ֽڣ�forѭ�������������ݽ����޸�ʱ��һ�η��ʵ��ǣ�
//arr[0]�ĵ������ֽڣ�arr[0]�ĸ������ֽڣ�arr[1]�ĵ������ֽڣ�arr[1]�ĸ������ֽڣ��ʸı�֮���������������£�
//0x00ECFBF4 : 00 00 00 00
//0x00ECFBF8 : 00 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//������ӡ��0   0   3   4   5
int main()
{
	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
	return 0;
}