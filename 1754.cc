#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a < b) {
            swap(a, b);
        }
        if (a - b > b) {
            cout << "NO" << endl;
        } else {
            if ((b * 2 - a) % 3 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}