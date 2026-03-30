#include <iostream>
#include <vector>
using namespace std;

#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;
        ll res = 0;
        if (y > x) {
            if (y % 2 == 0) {
                res = y * y - x + 1;
            } else {
                res = (y - 1) * (y - 1) + x;
            }
        } else {
            if (x % 2 == 1) {
                res = x * x - y + 1;
            } else {
                res = (x - 1) * (x - 1) + y;
            }
        }
        cout << res << endl;
    }
}