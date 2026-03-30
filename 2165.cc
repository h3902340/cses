#include <iostream>
#include <vector>
using namespace std;

void dfs(int a, int b, int n) {
    if (n == 1) {
        cout << a << ' ' << b << endl;
        return;
    }
    dfs(a, a ^ b, n - 1);
    cout << a << ' ' << b << endl;
    dfs(a ^ b, b, n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    dfs(1, 3, n);
}