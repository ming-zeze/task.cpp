#define _CRT_SECURE_NO_WARNINGS 1
//在1－n中，找出能同时满足用3除余2，用5除余3，用7除余2的所有整数的个数,如果没有请输出0。
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int i = 1;
	int count = 0;
	for (i;i<=n ;i++)
	{
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
		{
			count++;
		}
		
	}
		cout << count<< endl;

	return 0;
}




