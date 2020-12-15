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
//arr数组在内存中的存储格式为：
//0x00ECFBF4:  01 00 00 00
//0x00ECFBF8 : 02 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//指针p的类型为short*类型的，因此p每次只能所有两个字节，for循环对数组中内容进行修改时，一次访问的是：
//arr[0]的低两个字节，arr[0]的高两个字节，arr[1]的低两个字节，arr[1]的高两个字节，故改变之后，数组中内容如下：
//0x00ECFBF4 : 00 00 00 00
//0x00ECFBF8 : 00 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//故最后打印：0   0   3   4   5
int main()
{
	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
	return 0;
}