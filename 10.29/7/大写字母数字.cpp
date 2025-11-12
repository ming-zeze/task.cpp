#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() 
{
    char ch;
    int count = 0;
    cin >> ch;
    while(ch!='.')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            count++;
        }
        cin >> ch;
    }
    cout << count << endl;
    return 0;
}