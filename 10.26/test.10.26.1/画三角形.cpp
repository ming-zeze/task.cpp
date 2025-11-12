#define _CRT_SECURE_NO_WARNINGS 1
//输入一个正整数 n，请使用大写字母拼成一个这样的三角形图案
// 三角形图案的第 1 行有 1 个字母，第 2 行有 2 个字母，以此类推；
//在三角形图案中，由上至下、由左至右依次由大写字母 A - Z 填充，
// 每次使用大写字母 Z 填充后，将从头使用大写字母 A 填充。
#include<iostream>
using namespace std;
int main()
{
	char ch = 'A';
	int num = 0;
	cin >> num;
	int i = 1;
	for (i=1; i <= num; i++)//i是控制打印出来的竖列数
	{
		for (int j = 1;j<=i; j++)//判断每行输出的个数，当j=i时停止输出
		{
			cout << ch ;   //若写成cout<<ch<<endl的形式 则会每输出一个数就进行一次换行
			ch++;              //所以将他们分开就能满足
			if (ch > 'Z')
			{
				ch = 'A';
			}
			
			
		}cout << endl;
	}



	return 0;
}