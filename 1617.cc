#include <iostream>
#include <vector>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
int mul(int a, int b, int p) { return (ll)a * b % p; }
int pow(int a, int b, int p) {
    if (a == 0) return 0;
    if (a == 1) return 1;
    if (b == 0) return 1;
    if (b & 1) {
        int temp = pow(a, b - 1, p);
        return mul(a, temp, p);
    }
    int temp = pow(a, b >> 1, p);
    return mul(temp, temp, p);
}

int main() {
    int n;
    cin >> n;
    cout << pow(2, n, MOD) << endl;
}