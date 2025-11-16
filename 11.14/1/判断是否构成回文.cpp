#define _CRT_SECURE_NO_WARNINGS 1
//输入一串字符, 字符个数不超过100, 且以"."结束。 判断它们是否构成回文
#include<iostream>
using namespace std;
int main()
{
	char n;
	char arr[100] = {0};
	int count = 0;
	//输入字符串数组
	for (int i = 0; i < 100; i++)
	{
		cin >> arr[i];
		if (arr[i] == '.')
		{
			break;
		}
		count++;
	}
	//判断是否是回文字符串
	bool flag = true;
	for (int i = 0; i < count / 2; i++)
	{
		if (arr[i] != arr[count - 1 - i])//count是字符串的长度
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "TRUE";
	}
	else {
		cout << "FALSE";
	}

	return 0;
}	//do
	//{
	//	cin >> n;
	//	arr[count]=n;
	//	count++;
	//} while (n != '.' && count < 100);
