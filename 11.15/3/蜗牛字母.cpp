#define _CRT_SECURE_NO_WARNINGS 1
//已知大写字母怪兽的弱点是该字母对应的 ASCII 码值，
// 例如怪兽 A 的弱点是 65。
// 小写字母怪兽的弱点是该字母对应的大写字母，
// 例如怪兽 b 的弱点是 B。
// 输入为一个字符，保证是大写字母或者小写字母中的一个，代表一个字母怪兽。
// 输出一行，为一个整数或一个字符，是这个怪兽的弱点
#include <iostream>
using namespace std;
int main() 
{
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << (int)ch << endl;
    }
    if (ch >= 'a' && ch <= 'z')
    {
        cout <<(char) (ch - 32) << endl;
    }


    return 0;
}