#define _CRT_SECURE_NO_WARNINGS 1
//气象台发布了未来n天的温度预报。
// 未来n天最高温度和最低温度的差值是多少？哪天温度最低？
// 输出描述
// 第1行有1个整数，代表最高问题和最低温度的差值。
//第2行输出第几天温度最低，如果有多天温度都是最低的，
//那么都要输出（多个数用空格隔开）。
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max - min << endl;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == min)
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}