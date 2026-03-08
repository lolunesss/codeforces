#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cs[26] = {0};
    for (auto ch : s) {
      cs[ch - 'a']++;
    }
    int evens = 0;
    int odds = 0;
    for (int i = 0; i < 26; i++) {
      if (cs[i] & 1)
        odds++;
      else
        evens++;
    }
    cout << (k < odds - 1 ? "NO" : "YES") << endl;
  }
  return 0;
}