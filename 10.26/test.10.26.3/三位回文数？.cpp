#define _CRT_SECURE_NO_WARNINGS 1
//请从小到大输出 m~n 之间所有的 3 位的回文数，并求出这些数有多少个。
//先输出 m~n 之间所有的 3 位的回文数，每行 1 个；
//最后 1 行输出 3 位回文数总共有多少个；
//回文数正着读和反着读都一样的数字
#include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;//都是三位数
	int i = num1;
	int count = 0;
	for (i; i <= num2; i++)
	{
		int g = i % 10;
		int b = i / 100;
		if (g == b)
		{
			cout << i << endl;
			count++;
		}
		
	}
	cout << count;
	return 0;
}