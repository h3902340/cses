#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1 << (31 - __builtin_clz(n));
    if (a < n) {
        a <<= 1;
    }
    vector<vector<int>> mex(a, vector<int>(a));
    for (int j = 0; j < a; j++) {
        mex[0][j] = j;
    }
    for (int i = 1; i < a; i++) {
        int l = 1 << (31 - __builtin_clz(i));
        for (int j = 0; j < a; j++) {
            if (j / l % 2 == 0) {
                mex[i][j] = mex[i - l][j + l];
            } else {
                mex[i][j] = mex[i - l][j - l];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mex[i][j] << ' ';
        }
        cout << endl;
    }
}