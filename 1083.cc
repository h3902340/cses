#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 1;
    for (int i = 2; i <= n; i++) {
        int a;
        cin >> a;
        res = res ^ i ^ a;
    }
    cout << res << endl;
}