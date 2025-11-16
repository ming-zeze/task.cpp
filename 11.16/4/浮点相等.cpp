#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() 
{
    double standard = 0.00000001;
    double a = 0,b = 0;
    cin >> a >> b;
    if (a < b) 
    {
        if ((b - a) < standard)
        {
            cout << "yes";
        }
        else 
        {
            cout << "no";
        }

    }
    if (a > b)
    {
        if ((a - b) < standard) 
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }

   }
    

    return 0;
}