#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;//1<=n<=100
	for (; n > 0; n--)
	{
		int m;//1<=m<=10000
		cin >> m;
		m = (m + 5) / 10 * 10;
		cout << m << endl;

	}
	return 0;
}