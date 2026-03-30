#include <iostream>
#include <vector>
using namespace std;

void dfs(int i, int n, string& temp) {
    if (i == n) {
        cout << temp << endl;
        return;
    }
    dfs(i + 1, n, temp);
    temp[i] ^= 1;
    dfs(i + 1, n, temp);
}

int main() {
    int n;
    cin >> n;
    string temp(n, '0');
    dfs(0, n, temp);
}