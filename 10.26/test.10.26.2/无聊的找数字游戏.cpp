#define _CRT_SECURE_NO_WARNINGS 1
//请输出 1~n 中至少能够被 2 、 3 、 5 、 7 中两个及两个以上的数整除的数
//比如： 30 ，就是能够被 2 、 3 、 5 、 7 中的 3 个数整除
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		int count = 0;
		if (i % 2 == 0) count++;
		if (i % 3 == 0) count++;
		if (i % 5 == 0) count++;
		if (i % 7 == 0) count++;
		if (count > 1)  cout << i << endl;

	}



	return 0;
}