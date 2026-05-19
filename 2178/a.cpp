#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int yc = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'Y') yc++;
    }
    cout << (yc > 1 ? "NO" : "YES") << endl;
  }
  return 0;
}