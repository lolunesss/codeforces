#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int max_empty = 0;
    int c = 0;
    int all_empty = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '.') {
        c++;
        all_empty++;
      } else {
        c = 0;
      }
      max_empty = max(c, max_empty);
    }
    if (max_empty >= 3) {
      cout << 2 << endl;
    } else {
      cout << all_empty << endl;
    }
  }
  return 0;
}