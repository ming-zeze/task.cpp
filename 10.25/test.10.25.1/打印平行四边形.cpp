#define _CRT_SECURE_NO_WARNINGS 1
//打印向右下倾斜的平行四边形
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int black = 0; black < i; black++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
       
    }

    return 0;
}

