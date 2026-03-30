#include <iostream>
#include <vector>
using namespace std;

struct Data {
    int i;
    int j;
};
const int mv[9]{1, 2, 1, -2, -1, 2, -1, -2, 1};
int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, -1));
    vector<Data> q(n * n);
    int l = 0;
    int r = 0;
    q[r++] = {0, 0};
    grid[0][0] = 0;
    while (l < r) {
        Data a = q[l++];
        for (int k = 0; k < 8; k++) {
            int x = a.i + mv[k];
            int y = a.j + mv[k + 1];
            if (x < 0 || y < 0 || x >= n || y >= n) {
                continue;
            }
            if (grid[x][y] != -1) {
                continue;
            }
            grid[x][y] = grid[a.i][a.j] + 1;
            q[r++] = {x, y};
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }
}