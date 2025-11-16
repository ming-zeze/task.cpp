#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() 
{
    //输入数据的组数
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)//控制轮数
    {    
        int num = 0;
        cin >> num;
        //每组数据有多少个元素
        int* p = new int[num];
        long long sum = 0;
        for (int j = 0; j < num; j++)
        {
            cin >> p[j];//输入数据
            sum += p[j];//求出S（n）
        }
        //寻找2S（i）=S（n）的i
        int sum1 = 0;
        bool flag = false;
        for (int j = 0; j < num-1; j++)
        {
            sum1 += p[j];
            if (2 * sum1 == sum)
            {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "Yes"<<endl;
        }
        else {
            cout << "No"<<endl;
        }
        delete[] p;
    }
   

    return 0;
}