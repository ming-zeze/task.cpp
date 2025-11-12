#define _CRT_SECURE_NO_WARNINGS 1
//正整数M与N之间的所有素数的个数.（M <= N）
#include <iostream>
using namespace std;
int main()
{
	int num1=0,num2 = 0;
	int i = 0, j = 0;
	cin >> num1>>num2;
	if (num2 < 2)//结束程序，右边界要大于二
	{
		cout<<endl;
	}
	if (num1 < 2)//左边界至少为二
	{
		num1 = 2;
	}

	int count = 0;
	for (i = num1;i <= num2; i++)
	{
		bool flag = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
			
		}
		if(flag)
			{
				count++;
			}
	}
	cout << count << endl;
	return 0;
}