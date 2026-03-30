#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if (a + b != 0 && (a == 0 || b == 0)) {
            cout << "NO" << endl;
            continue;
        }
        if (a + b > n) {
            cout << "NO" << endl;
            continue;
        }
        if (a + b == 1) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++) {
            cout << i << ' ';
        }
        cout << endl;
        int draw = n - a - b;
        for (int i = 1; i <= draw; i++) {
            cout << i << ' ';
        }
        for (int i = 1; i <= b; i++) {
            cout << n - b + i << ' ';
        }
        for (int i = 1; i <= a; i++) {
            cout << draw + i << ' ';
        }
        cout << endl;
    }
}