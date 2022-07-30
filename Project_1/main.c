#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define N 5

void print(int arr[],int arr_len)
{
	//一位数组的存储、传递和访问越界
	int i;
	for (i = 0; i < arr_len; i++)
	{
		printf("%3d", arr[i]);
	}
	arr[4] = arr[4] + 5;
	printf("\n");
}
void array()
{
	int n = 0;
	int j = 10;
	int arr[N] = { 1,2,3,4,5 };
	int i = 3;
	//arr[5] = 10;//访问越界
	//arr[6] = 20;
	//arr[7] = 30;
	/*for (n = 0; n < N; n++)
	{
		printf("%3d", arr[n]);
	}
	printf("\n");
	printf("%d\n", arr[0]);*/
	print(arr,5);
	printf("i=%d,j=%d,arr[4]=%d\n", i, j,arr[4]);
}

void arr_stackoverflow()
{
	//栈空间不宜过大,否则会溢出
	//数组的爆栈
	int arr[3300] = { 0 };
}

void two_arr_print(int arr[][4],int row)
{
	//二维数组的存储和传递
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < sizeof(arr[0])/sizeof(int); j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n\n");
	}
}
void two_arr()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = { { 1 }, { 5 }, { 9 } };//特殊定义
	two_arr_print(arr,3);
	printf("%d\n", arr[1][2]);
}

void scanf_while()
{
	char c;
	char arr[100] = { 0 };
	int i = 0;
	printf("请输入一组字符串:");
	while (scanf("%c", &c) != EOF)
	{
		arr[i++] = c;
		//putchar(c);
	}
	printf("%s\n",arr);
}

void string_print(char arr[10])
{
	int i=0;
	while (arr[i])
	{
		putchar(arr[i]);
		i++;
	}
	arr[4] = 'A';
	printf("\n");
}
void char_arr_int()
{
	char arr[] = "hello";
	string_print(arr);
	printf("%s\n", arr);
}

void string_scanf()
{
	//scanf读取字符串
	char arr[100];
	while (scanf("%s", arr)!=EOF)
	{
		printf("%s", arr);
	}
}

void string_gets()
{
	char arr[100] = { 0 };
	printf("请输入一个字符串:");
	while (gets(arr) != NULL)
	{
		puts(arr);//等价printf("%s\n", arr);默认在字符串后加换行
	}
}

unsigned int mystrlen(char arr_1[])
{
	int i;
	for (i = 0; arr_1[i]; i++)//arr_1[i]!=0 可简写为 arr_1[i]
	{	}
	return i;
}
void use_str()
{
	char arr[100] = { 0 };
	char d[100];
	int len;
	printf("请输入一个字符串:");					
	while (gets(arr) != NULL)
	{
		strcpy(d,arr);//strcpy:将一个字符串复制到另一个字符串中
		puts(d);//等价printf("%s\n", arr);默认在字符串后加换行
		len = mystrlen(arr);
		printf("字符的长度是:%d\n",len);
	}
}

void use_strcmp()
{
	char arr[100] = { 0 };
	char d[100] = { 0 };
	printf("请输入一个字符串:");
	while (scanf("%s%s", arr, d) != EOF)
	{
		printf("strcmp=%d\n", strcmp(arr,d));//strcmp:比较两个字符串的大小
		strcat(arr, d);//strcat:将后一个字符串连接到前一个字符串末端,并返回前一个指针
		puts(arr);
	}
}

unsigned int mystrlen_1(char arr_1[])
{
	int i;
	int j=0;
	if (arr_1[0] != '_')
	{
		j = 1;
	}
	else {
		j = 0;
	}
	for (i = 0; arr_1[i]; i++)
	{
		if(arr_1[i] == '_' && arr_1[i + 1] != '_')
		{
			j++;
		}
	}
	return j;
	//printf("\n");
}
void use_mystrlen()
{
	char arr[100] = { 0 };
	char arr_0[100] = { 0 };
	printf("请输入一行字符串:");
	while (scanf("%s",arr) != EOF)
	{
		strcpy(arr_0, arr);
		puts(arr_0);
		printf("单词的总个数为:%d\n", mystrlen_1(arr));
	}
}

int main()
{
	//array();

	//arr_stackoverflow();

	//two_arr();

	//scanf_while();

	//char_arr_int();

	//string_scanf();

	//string_gets();

	//use_str();

	//use_strcmp();

	//use_mystrlen();

	return 0;

}