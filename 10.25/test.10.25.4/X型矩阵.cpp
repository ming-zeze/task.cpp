#define _CRT_SECURE_NO_WARNINGS 1
//小杨想要构造一个N* N 的 X 字矩阵（ N为奇数），
// 这个矩阵的两条对角线都是半角加号 + ，其余都是半角减号 - 。
//例如，一个5 * 5的 X 字矩阵如下：
//  +---+
//  -+-+-
//  --+--
//  -+-+-
//  +---+
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int i = 0, j = 0;
	for (i = 1; i <=n; i++)//竖行
	{
		for (j = 1; j <=n; j++)//横行
		{
			if (i == j || i + j == n+1 )//当i==j时是在对角线上
			{							//当i+j==n+1时是在副对角线上
				cout << "+";           
			}
			else {
				cout << "-";
			}
		}cout << endl;

	}

	return 0;
}
