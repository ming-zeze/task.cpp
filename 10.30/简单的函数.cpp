#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int show(char ch,int num);
int main()
{
	show('*', 40);
	cout << endl;
	cout << "我是南京工业大学的学生" << endl;
	cout << "来自地空专业" << endl;
	show('*', 40);
	return 0;
}
int show(char ch, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << ch ;
	}
	return 0;
}