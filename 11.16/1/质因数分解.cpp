#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() 
{
    long long n = 0;
    cin >> n;
    for (long long i = 2; i*i<=n; i++)//不从大向小遍历是因为效率低下
    {                              //从n遍历到√n的时间复杂度是O(n)，而从2遍历到√n的时间复杂度是O(√n)     
            if (n % i == 0)         // 找到较小的质因数i，较大的就是n/i
            {                      //因为已经知道了n是由两个质数构成的 所以找到较小的质数后也就确定了较大的质数
                cout << n / i << endl;
                return 0;
            }
    }


    return 0;
}