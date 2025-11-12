#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//有一堆100多个的零件，若三个三个数，剩二个；若五个五个数，剩三个；
// 若七个七个数，剩五个。
// 请你编一个程序计算出这堆零件至少是多少个？
int main() 
{
    int num = 101;
    for (num; num < 200; num++)
    {
        if (2 == num % 3 && 3 == num % 5 && 5 == num % 7) 
        {
            cout << num << endl;
        }


    }




    return 0;
}