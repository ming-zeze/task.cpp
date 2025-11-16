#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;
//AI优化版 
bool panDuan(char arr[], int start, int end)
{
	while (start < end)
	{
		if (arr[start] != arr[end])
			return false;
		start++;//直接从数组的开头和结尾进行归一
		end--;//若是借助计数器来划分区间则计算麻烦且容易搞混
	}
	return true;
}
int main()
{
	//输入组数
	int n = 0;
	cin >> n;

	
	for (int i = 0; i < n; i++)
	{
		//输入数组
		char arr[101] = { 0 };
		cin >> arr;
		int len = strlen(arr);
		
		//判断长度大于四
		if (len < 4)
		{
			cout << "No" << endl;
			continue;
		}

		//遍历分割点
		bool flag = false;
		for (int j = 2; j <= len - 2; j++)//分割点至少从2开始到len-2结束  算法上的优化
		{
			if (panDuan(arr, 0, j - 1) && panDuan(arr, j, len - 1))
			{
				flag = true;//判断前半部分和后半部分，注意准换节点
				break;
			}
		}
		if (flag)
		{
			cout << "Yes" << endl;
		}else 
		{
			cout << "No" << endl;
		}
	}
	return 0;
}