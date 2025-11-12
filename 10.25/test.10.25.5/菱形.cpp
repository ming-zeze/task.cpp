#define _CRT_SECURE_NO_WARNINGS 1

//绘制的菱形是一个 n 行 n 列的字符画，n 是一个大于 1 的奇数。
// 菱形的四个顶点依次位于
// 第 1 行、第 1 列、第 n 行、第 n 列的正中间，
// 使用 # 绘制。相邻顶点之间也用 # 连接。其余位置都是.。
//5*5的情况
//   ..#..
//   .#.#.
//   #...#
//   .#.#.
//   ..#..
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // 计算当前位置到中心的距离
            int dist_i, dist_j;

            // 计算i到中心的距离
            if (i > mid) {
                dist_i = i - mid;
            }
            else {
                dist_i = mid - i;
            }

            // 计算j到中心的距离
            if (j > mid) {
                dist_j = j - mid;
            }
            else {
                dist_j = mid - j;
            }

            // 判断是否在菱形边界上
            if (dist_i + dist_j == mid - 1) {
                cout << '#';
            }
            else {
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}



