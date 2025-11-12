#define _CRT_SECURE_NO_WARNINGS 1
//打印字符图形。输出n行n列"*"
//输入描述
//一个整数 n(0 ＜ n ＜ 10)
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	/*int i = 0, j = 0;*/
	for (int i=0; i < n; i++)
	{
		for ( int j=0; j < n; j++)//将变量声明在循环内 会让变量更清晰直观
		{						//在内层循坏内对变量进行初始化，能够使j重置从而打印出每行的* 
			                    //否则的话中鞥打印出每列的内容
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}
