#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int m = 0;
	cin >> m;
	for (int n = 0; n < m; n++)
	{
		cin >> arr[n];
	}
	for (int i = m - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	return 0;

}