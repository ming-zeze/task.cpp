#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	int arr[11];
	int m = 0;
	cin >> m;
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		//cout << sum << endl;
	}
	 printf("AVE=%.1f\n", sum / m);
	 for (int i = 0; i < m-1; i++)
	 {
		 if (arr[i] > sum / m)
		 {
			 cout << i+1 << ":" << arr[i] << " ";
		 }
	 }


	return 0;
}