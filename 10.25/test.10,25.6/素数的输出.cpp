#define _CRT_SECURE_NO_WARNINGS 1
//求出N以内的全部素数，并按每行五个数显示。
#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cin >> num;
    int i = 0, j = 0;

    if (num == 1 )
    {
        cout << endl;
    }
    
        int count = 0;
        for (i = 2; i <= num; i++)
        {
            bool flag = 1;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
                if(flag)
                {
                    cout << i << " ";
                    count++;
                
                    if (count == 5)
                    {
                        cout << endl;
                        count = 0;//int count=0   是对count进行了（重新定义）这里不能说是重新定义 
                                  //重新定义是指重新覆盖 此时会改变全局的值 
                                  //是创建了一个局部变量
                                  //而count=0    是对count进行了赋值运算 是修改了现有的变量值
                    }
                }
        }
   

    return 0;
}