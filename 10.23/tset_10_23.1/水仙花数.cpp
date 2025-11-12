#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	int num = 100;
	for (num = 100; num <= 999; num++)
	{
		int a = num % 10;
		int b = (num / 10) % 10;
		int c = num / 100;
		int sum = a * a * a + b * b * b + c * c * c;

		if (sum == num)
		{
			cout << sum << " ";
		}
	}
	return 0;
}