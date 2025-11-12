#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() 
{
    int n = 0;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n;i++)
    {
        if (arr[i] >= 90)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}