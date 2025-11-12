#define _CRT_SECURE_NO_WARNINGS 1
//第一行有一个整数n(n≤10);
//第二行有n个整数;
//第三行有一个整数x，为要删除的位置。
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int arr[10];
    int* p = arr;

    for (int i = 0; i < n; i++)
    {
        cin >> *(p + i);
    }
    int x = 0;
    cin >> x ;
    //直接要删去元素的地方从后向前进行覆盖
   // for (int i = x; i <n; i++)
   // {
   //     *(p + x-1) = *(p + x); 这会导致只有第一个元素被正确覆盖
   // }
    for (int i = x - 1; i < n - 1; i++)
    {
        *(p + i) = *(p + i + 1);
    }
    //*(p + n-1) = NULL;  空指针时指针不是" ",而是"0"
    for (int i = 0; i < n-1; i++)//最后一位杀不掉怎么办
    {                            //直接在输出是给舍去
        cout << *(p + i) << " ";//输出时少输出一位就行了
    }



    return 0;
}