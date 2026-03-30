#include <iostream>
#include <vector>
using namespace std;

#define ll long long
int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    ll t = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        t += p[i];
    }
    ll res = t;
    for (int i = (1 << n) - 1; i >= 0; i--) {
        ll s = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                s += p[j];
            }
        }
        res = min(res, abs(s * 2 - t));
        if (res == 0) {
            break;
        }
    }
    cout << res << endl;
}