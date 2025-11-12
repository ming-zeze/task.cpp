#define _CRT_SECURE_NO_WARNINGS 1
//输入描述
//给若干个正整数，并将这些数乘起来。
//若这些数的乘积超过10^6就不会做了。
//第一行一个整数 n，表示正整数的个数。
//接下来n,每行一个整数a 需要将所有的 a 乘起来。
//输出描述
//输出一行，如果乘积超过 10^6则输出 > 1000000；
//否则输出所有数的乘积。
#include<iostream>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int* p =  new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(p + i);
    }
    long long produce = 1;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        produce *= *(p + i);
        if (produce > 1000000)
        {
            flag = false;
            break;
        }
    }
    if (flag ==false)
    {
        cout << ">1000000";
    }
    else 
    {
            cout<< produce;
    }
    delete[]p;
    return 0;
}