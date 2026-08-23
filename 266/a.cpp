#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ch = 'a';
  s += 'a';
  int cc = 1;
  int result = 0;
  for (auto c: s) {
    if (ch != c) {
      result += cc - 1;
      ch = c;
      cc = 1;
    } else {
      cc++;
    }
  }
  cout << result << endl;
  return 0;
}
