#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() 
{
    double s = 0;
    int n = 0;
    cin >> n;//n<=30
    int zi = 1,mu=1;
    for (int i = 0; i < n; i++)
    {
        s +=(double) zi / mu;  //① 先累加当前项
        int temp = zi+mu;      //② 再准备下一项
        zi = mu;               //先使用，后更新
        mu = temp;
       
    }
    printf("%.3f", s);


    return 0;
}