#define _CRT_SECURE_NO_WARNINGS 1
//按从小到大排序
#include <iostream>
using namespace std;
int main() 
{
    int num[10];
    int m = 0;
    cin >> m;
    for (int n = 0; n < m; n++)
    {
        cin >> num[n];
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = 0;
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}