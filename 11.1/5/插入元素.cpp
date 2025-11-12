#define _CRT_SECURE_NO_WARNINGS 1
//在一个数组的第x个位置插入一个新的数y
// 输入描述
//第一行有一个整数n(5≤n≤10 ）;
//第二行有n个整数;
//第三行有一个整数x，为要插入的位置 
//第四行有一个整数y，为要插入的整数。
#include <iostream>
using namespace std;
int main() 
{
    int n = 0;
    cin >> n;
    int arr[11];
    int* p = arr;
    
    //创建数组
    for (int i = 0; i < n; i++)
    {
        cin >> *(p+i);
    }
    int x, y = 0;
    cin >> x >> y;
    for(int i=n;i>=x;i--)
    {
        *(p + i) = *(p + i - 1);
    }
    *(p + x-1) = y;
    for (int i = 0; i < n + 1; i++)
    {
        cout << *(p + i) << " ";
    }



    return 0;
}