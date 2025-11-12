#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int arr[20];
    
    //使用指针读取数据
    int* p = arr;
    for (int i = 0; i < n; i++)
    {
        cin >> *p;
        p++;
    }
    int num = 0;
    cin >> num;
    p = arr + n - 1;  //arr指向数组的第0位，这步使得指针p指向第n-1位
    bool flag = false;
    for (int i = n - 1; i >= 0; i--)
    {
        if (*p == num)
        {
            cout << i + 1;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "-1";
    }
    delete[]p;
    return 0;
}