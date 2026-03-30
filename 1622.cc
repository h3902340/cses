#include <iostream>
#include <vector>
using namespace std;

#define ll long long
void dfs(int i, int n, int c[26], string& s) {
    if (i == n) {
        cout << s << endl;
        return;
    }
    for (int j = 0; j < 26; j++) {
        if (c[j] == 0) {
            continue;
        }
        c[j]--;
        s[i] = j + 'a';
        dfs(i + 1, n, c, s);
        c[j]++;
    }
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int c[26]{0};
    for (int i = 0; i < n; i++) {
        c[s[i] - 'a']++;
    }
    ll res = 1;
    int a = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 1; j <= c[i]; j++) {
            a++;
            res = res * a / j;
        }
    }
    cout << res << endl;
    dfs(0, n, c, s);
}