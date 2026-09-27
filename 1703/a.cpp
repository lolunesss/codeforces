#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    s[0] = tolower(s[0]);
    s[1] = tolower(s[1]);
    s[2] = tolower(s[2]);
    cout << (s == "yes" ? "YES" : "NO") << endl;
  }
  return 0;
}
