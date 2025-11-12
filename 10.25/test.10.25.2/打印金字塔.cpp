#define _CRT_SECURE_NO_WARNINGS 1
//一个字符图形，例如，输入3，则输出图形如下 代表*
//    ×
//  ×××
//×××××
#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin>>n;
	for (int i = 1; i <= n; i++)
	{	
		
		for (int blank = 0; blank <n-i; blank++)//空格数等于总行数减去第几行
		{
			cout << " ";
		}
		for (int j =0 ; j <2*i-1 ; j ++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}










