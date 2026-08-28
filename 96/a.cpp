#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  s += 'b';
  char ch = s[0];
  int cc = 0;
  bool dangerous = false;
  for (auto c: s) {
    if (ch == c) {
      cc++;
    } else {
      ch = c;
      cc = 1;
    }
    if (cc == 7) dangerous = true;
  }
  cout << (dangerous ? "YES" : "NO") << endl;
  return 0;
}
