#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n, m;
    cin >> n >> m;
    string p;
    cin >> p;
    map<char, int> cs;
    for (auto ch: p) {
      cs[ch]++;
    }
    int q = 0;
    for (char i = 'A'; i <= 'G'; i++) {
      q += max(m - cs[i], 0);
    }
    cout << q << endl;
  }
  return 0;
}
