#define _CRT_SECURE_NO_WARNINGS 1
//在已知一组整数中，有这样一种数非常怪，
// 它们不在第一个，也不在最后一个，
// 而且刚好都比左边和右边相邻的数大，
//第一行为整数m，表示输入的整数个数（ 3<= m <=100 ) 第二行为m个整数。
#include <iostream>
using namespace std;
int main()
{
	int arr[100];
	int m = 0;
	cin >> m;
	for (int i = 0; i < m ; i++)
	{	
		cin >> arr[i];
	}
	for (int j = 1; j < m - 1; j++)
	{
		if (arr[j] > arr[j + 1] && arr[j] > arr[j - 1])
		{
			cout <<arr[j] <<endl;
		}
		
	}

	return 0;

}