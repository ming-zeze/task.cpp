#define _CRT_SECURE_NO_WARNINGS 1
//请问 100~n(n为三位数) 中连续递增或者连续递减的 3 位数的总和是多少，有多少个？
//连续递递增或递减指的是三位数相邻的两位之间都是递增的或者是递减的。
//比如： 139 ，三位数就是连续递增的，因为 1 < 3 && 3 < 9 ；
//再比如： 931 ，三位数就是连续递减的，因为 9 > 3 && 3 > 1 ；
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	int i = 100;
	int sum = 0,count=0;
	for (i; i <= num; i++)
	{
		int g = i % 10;
		int s = i / 10 % 10;
		int b = i / 100;
		
		if (g < s && s < b)
		{
			sum += i;
			count++;
		}
		if (g > s && s > b)
		{
			sum += i;
			count++;
		}
	}
	cout << sum << endl ;
	cout << count;

	return 0;
}





