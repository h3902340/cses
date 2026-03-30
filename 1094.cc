#include <iostream>
#include <vector>
using namespace std;

#define ll long long
int main() {
    int n;
    cin >> n;
    int p = 0;
    ll res = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (p > a) {
            res += (p - a);
            a = p;
        }
        p = a;
    }
    cout << res << endl;
}