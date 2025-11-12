#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>				//打印左下的直角三角形
using namespace std;
int main()
{
	int n = 0;
	cin >> n;//i表示数列 j表示横列
	for (int i = 0; i < n; i++)
	{
		for ( int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}