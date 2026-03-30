#include <iostream>
#include <vector>
using namespace std;

#define ll long long
int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; k++) {
        ll res = (ll)k * k * (k * k - 1) / 2;
        if (k >= 3) {
            res = res - (ll)(k - 2) * (k - 1) * 4;
        }
        cout << res << endl;
    }
}