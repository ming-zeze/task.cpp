#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() 
{
    int arr[100];
    int m = 0;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < m - 1; j++)
    {
        for (int i = 0; i < m - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = 0;
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
        if (i < 2)
        {
            cout << "500" << endl;
        }
        else if (i < 6)
        {
            cout << "300" << endl;
        }
        else if (i < 10)
        {
            cout << "100" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
   




    return 0;
}