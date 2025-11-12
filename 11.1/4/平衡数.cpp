#define _CRT_SECURE_NO_WARNINGS 1
//平衡数：如果正整数 x 的每一位数字 d 恰好在 x 中出现了 d 次，
// 则认为 x 是平衡数。例如 x = 122，其中
//对于百位数 d = 1，其中 1 在 122 中总共出现了 1 次，符合条件；
//对于十位数 d = 2，其中 2 在 122 中总共出现了 2 次，符合条件；
//对于个位数 d = 2，其中 2 在 122 中总共出现了 2 次，符合条件；
//因为 122的每一位都符合条件，所以 122是平衡数。
//现在给出两个正整数l, r(l≤r)，请帮忙求出l∼r中所有平衡数的和。
//!!!!平衡数中不能包含0
#include <iostream>
using namespace std;
int  main()
{
	int l=0,r = 0;
	cin >>l>> r;
	int sum = 0;

	for (int i = l; i <= r; i++)
	{
		//确保没有0 如果有的话 就跳过这个数字
		bool flag = false;
		int temp = i;        //使用temp来替换i来进行遍历，使得i之不会发生改变
		while (temp > 0)     //保护了原始数据
		{                    //在处理需要多次访问或修改的数据时会经常使用
			int n = temp % 10;
			if (n == 0)
			{
				flag = true;
				break;
			}
			temp /= 10;
		}
		if (flag)
		{
			continue;
		}

		//算出数字中每个数字的次数
		int arr[10] = { 0 }; //使用10比9更方便 1.直接使下标和数字对应 2.防止了越界
		temp = i;
		while (temp > 0)
		{		     
			int num = temp % 10;
			arr[num]++;
			temp /= 10;
		}

		//判断是不是平衡数
		temp = i;
		bool flag1 = true;
		while (temp > 0)
		{
			int num = temp % 10;
			if (num != arr[num])
			{
				flag1 = false;
				break;
			}
			temp /= 10;
		}
		
		if (flag1)
		{
			sum += i;
		}
		
	}
	cout << sum;
	return 0;
}