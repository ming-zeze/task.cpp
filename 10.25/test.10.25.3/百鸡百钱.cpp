#define _CRT_SECURE_NO_WARNINGS 1
//如果每只公鸡 x 元，每只母鸡 y 元，每 z 只小鸡 1 元；
// 现在有 n 元，买了 m 只鸡，共有多少种方案？
// 1≤x, y, z ≤10，1≤ n, m ≤1000
#include <iostream>
using namespace std;
int main()
{
	int x = 0, y = 0, z = 0, n = 0, m = 0;
	cin >> x >> y >> z >> n >> m;
	int a = 0, b = 0, c = 0;//公鸡母鸡小鸡数
	int count = 0;
	for (a = 0; a <= m; a++)//要考虑到公鸡母鸡小鸡数分别等于总数的情况
	{
		for (b = 0; b <= m; b++)
		{
			for (c = 0; c <= m; c++)
			{
				if (a * x + b * y + c / z == m && a + b + c == n && c % z  == 0)
					count++;
			}
		}
	}
	cout << count;


	return 0;
}



