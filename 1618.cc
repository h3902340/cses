#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    int a = 5;
    while (n >= a) {
        res += n / a;
        a *= 5;
    }
    cout << res << endl;
}