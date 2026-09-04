#include <bits/stdc++.h>

using namespace std;

bool check(string s, string t) {
  size_t pos = -1;
  for (int i = 0; i < t.size(); i++) {
    pos = s.find(t[i], pos + 1);
    if (pos == string::npos) return false;
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  cout << (check(s, "hello") ? "YES" : "NO") << endl;
  return 0;
}
