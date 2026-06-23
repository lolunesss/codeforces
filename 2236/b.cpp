#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n - k; i++) {
      if (s[i] == '1') {
        s[i] = '0';
        s[i + k] = s[i + k] == '0' ? '1' : '0';
      }
    }
    bool yes = true;
    for (int i = n - k; i < n; i++) {
      if (s[i] == '1') yes = false;
    }
    cout << (yes ? "YES" : "NO") << endl;
  }
  return 0;
}