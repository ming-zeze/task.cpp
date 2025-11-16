#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() 
{
    int s = 1;
    int i = 1;
    int j = 1;
    while(s <5000)
    {
       
        i += j;
        s += i;
        j++;
    }
    cout << s;
    return 0;
}
