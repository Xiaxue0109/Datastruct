/*************************************************************************
	> File Name: 43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月29日 星期三 20时15分48秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n, num[1005][1005], ans[1005][1005];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> num[i][j];
        }
    }
    //两个数组，num是存放输入数据的，ans是存放答案的
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            ans[i][j] = max(ans[i + 1][j + 1], ans[i + 1][j]) + num[i][j];
        }
    }
    cout << ans[1][1] << endl;
    return 0;
}
