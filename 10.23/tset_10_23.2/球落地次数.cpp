#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	double high = 100;
	for (high; high > 0.5; count++)
	{
		high /= 2;
	}
	cout << count << endl;
	return 0;
}