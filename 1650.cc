#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 1; i < n; i++) {
        x[i] ^= x[i - 1];
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        int res = x[b - 1];
        if (a > 1) {
            res ^= x[a - 2];
        }
        cout << res << endl;
    }
    return 0;
}