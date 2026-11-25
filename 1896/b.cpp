#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char prev = 'B';
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      char ch = s[i];
      if (ch == 'A') {
        if (prev == 'B') {
          prev = 'A';
          count = 0;
        }
        count ++;
      } else {
        if (prev == 'B') {
          continue;
        } else {
          sum += count;
          prev = 'A';
          count = 1;
        }
      }
    }
    cout << sum << endl;
  }
  return 0;
}
