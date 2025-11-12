#define _CRT_SECURE_NO_WARNINGS 1
// 从键盘输入一个整数 N ，输入 N(5 <= N <= 20) 个元素，
// 输入一个整数，判断这个数组中最后一次出现该数的位置，
// 如果没有请输出 - 1。
//输入描述
//第1行读入一个整数n（ 5 <= n <= 20 ）
//第2行读入n个整数用空格隔开
//第3行读入1个整数，代表要找的数。
#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int arr[20];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int m = 0;
	cin >> m;

	//for (int i = 0; i < n; i++)
	//{								这种从前向后遍历的方法X
	//	if (arr[i] == m)			应该从后向前遍历
	//	{							这样才能找到该数字最后一次出现的位置					
	//		cout << i + 1;			不然找到的是第一次出现的位置
	//	}
	//	else {
	//		cout << "-1";
	//	}
	//}
	int flag = false;
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] == m)
		{
			cout << i + 1;
			flag = true;
			break;
		}
		
	}
	if (flag == false)
	{
		cout << "-1";
	}

	return 0;
}