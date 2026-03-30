#include <iostream>
#include <vector>
using namespace std;

int dfs(int j, int a1, int a2, int a3, vector<vector<char>>& board) {
    if (j == 8) {
        return 1;
    }
    int res = 0;
    for (int i = 0; i < 8; i++) {
        if (board[i][j] == '*') {
            continue;
        }
        int m1 = 1 << i;
        int m2 = 1 << (i - j + 7);
        int m3 = 1 << (i + j);
        if (a1 & m1) {
            continue;
        }
        if (a2 & m2) {
            continue;
        }
        if (a3 & m3) {
            continue;
        }
        res += dfs(j + 1, a1 | m1, a2 | m2, a3 | m3, board);
    }
    return res;
}

int main() {
    vector<vector<char>> board(8, vector<char>(8));
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }
    cout << dfs(0, 0, 0, 0, board) << endl;
}