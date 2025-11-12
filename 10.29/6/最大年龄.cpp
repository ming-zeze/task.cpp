#define _CRT_SECURE_NO_WARNINGS 1
//同学们在操场上排成了一个n行m列的队形，每行的同学属于一个小组，
// 请问每个小组同学的最高年龄是几岁，请输出每个小组的最高年龄。
//比如：如下是一个3行4列的队形，这个队形中每个数字代表了每个同学的年龄。
//8 10 12 9
//15 12 10 6
//17 20 18 18
//第一行的4个年龄中最高年龄是12岁。
//第二行的4个年龄中最高年龄是15岁。
//第三行的4个年龄中最高年龄是20岁。
#include <iostream>
using namespace std;
int main() 
{
    int arr[100][100];
    int m=0,n=0;
    cin >> n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i< n ; i++)
    {
        int max = arr[i][0];
        for (int j = 1; j < m;j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
        cout << max << endl;
    }
    return 0;
}


