#define _CRT_SECURE_NO_WARNINGS 1
//从键盘读入n个数（n <= 1000），统计每个数出现的次数，
//从小到大输出每个出现过的数，及每个数出现的次数。
//比如：假设从键盘读入6个数，分别是：1 6 8 1 2 6，那么输出如下：
//1 2
//2 1
//6 2
//8 1
//输出含义为：1出现了2次，2出现了1次，6出现了2次，8出现了1次。
#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;

	int arr[1000];
	int count[1001] = {0};
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		count[arr[i]]++;
	}
	for (int i = 0; i < 1001; i++)
	{
		if (count[i] > 0)
		{
			cout << i << " " << count[i] << endl;
		}
		
	}
	return 0;
}