#define _CRT_SECURE_NO_WARNINGS 1
//如果一个长方形的长和宽都是整数，它的面积一定也是整数。
//现在，小明想知道如果给定长方形的面积，有 多少种 可能的长方形，满足长和宽都是整数？
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int s = 0;
	cin >> s;
	int i = 1;
	int count = 0;
	for (i; i <= sqrt(s); i++)
	{
		if (s%i==0)//这样就找到了一对因数i s/i 	
		{			//使用双重循环的话虽然思维简单但是逻辑复杂且效率低
			count++;
		}
	}
	cout << count;

	return 0;
}






