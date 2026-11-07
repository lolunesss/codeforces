#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  string cf = "codeforces";
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < 10; i++) {
      if (cf[i] != s[i]) {
        c++;
      }
    }
    cout << c << endl;
  }
  return 0;
}
