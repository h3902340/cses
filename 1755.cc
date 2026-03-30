#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt[26]{0};
    int n = s.size();
    for (int i = 0; i < n; i++) {
        cnt[s[i] - 'A']++;
    }
    int c = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            if (c == 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            c = 1;
        }
    }
    int i = 0;
    int j = n - 1;
    for (int k = 0; k < 26; k++) {
        while (cnt[k] >= 2) {
            s[i++] = k + 'A';
            s[j--] = k + 'A';
            cnt[k] -= 2;
        }
        if (cnt[k] == 1) {
            s[n / 2] = k + 'A';
        }
    }
    cout << s << endl;
}