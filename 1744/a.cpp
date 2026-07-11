#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    vector<long long> ns(n);
    for (auto& x : ns) {
      cin >> x;
    }
    string s;
    cin >> s;
    char map[51] = {0};
    bool possible = true;
    if (ns.size() != s.size()) {
      cout << "NO" << endl;
      continue;
    }
    for (int i = 0; i < ns.size(); i++) {
      int n = ns[i];
      if (map[n]) {
        possible = possible && (map[n] == s[i]);
      } else {
        map[n] = s[i];
      }
    }
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
}
