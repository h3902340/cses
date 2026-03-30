#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r = n % 4;
    if (r == 1 || r == 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        if (r == 0) {
            cout << (n / 2) << endl;
            for (int i = 1; i <= n; i += 4) {
                cout << i << ' ' << i + 3 << ' ';
            }
            cout << endl;
            cout << (n / 2) << endl;
            for (int i = 1; i <= n; i += 4) {
                cout << i + 1 << ' ' << i + 2 << ' ';
            }
            cout << endl;
        } else {
            cout << ((n - 3) / 2 + 2) << endl;
            cout << 1 << ' ' << 2 << ' ';
            for (int i = 4; i <= n; i += 4) {
                cout << i << ' ' << i + 3 << ' ';
            }
            cout << endl;
            cout << ((n - 3) / 2 + 1) << endl;
            cout << 3 << ' ';
            for (int i = 4; i <= n; i += 4) {
                cout << i + 1 << ' ' << i + 2 << ' ';
            }
            cout << endl;
        }
    }
}