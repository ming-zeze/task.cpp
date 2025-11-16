#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
int main() 
{
    int h = 0, r = 0;
    cin >> h >> r;
    double pi=3.1415926;
    double V = 0;
    V = r * r * h *pi/1000;
    double n = 20 / V;
    if (n > (int)n)
    {
        cout << ((int)n + 1);
    }
    else {
        cout << n;
    }
    
    return 0;
}