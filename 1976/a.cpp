#include <bits/stdc++.h>

using namespace std;

bool is_increasing(string s) {
  for (int i = 1; i < s.size(); i++) {
    if (s[i] < s[i - 1]) return false;
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int nn;
    cin >> nn;
    string s;
    cin >> s;
    int i = 0;
    bool no = false;
    string n = "", a = "";
    while (s[i] >= '0' && s[i] <= '9') {
      n += s[i];
      i++;
    }
    a = s.substr(i);
    if (is_increasing(n) && is_increasing(a)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
