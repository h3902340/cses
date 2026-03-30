#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int res = 1;
    int c = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            c++;
        } else {
            c = 1;
        }
        res = max(res, c);
    }
    cout << res << endl;
}