#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <cstring>
using namespace std;
char change(char n);
int main()
{
	//输入
	char arr[101] = { 0 };		// 多一个位置给结束符
	cin >> arr;					// 直接读取整个字符串
	int count = strlen(arr);	// 获取实际长度
	//更改数字
	for (int i = 0; i < count; i++)
	{
		arr[i]=change(arr[i]);//接收返回值
	}
	//输出
	for (int i = 0; i < count; i++)
	{
		cout << arr[i];
	}
	
	return 0;
}
char change(char n)
{
	if (n == 'O')
	{
		n = '0';
	}if (n == 'l')
	{
		n = '1';
	}if (n == 'Z')
	{
		n = '2';
	}if (n == 'S')
	{
		n = '5';
	}if (n == 'b')
	{
		n = '6';
	}if (n == 'B')
	{
		n = '8';
	}if (n == 'q')
	{
		n = '9';
	}
	return n;
}