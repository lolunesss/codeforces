#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int freq[26] = {0};
    vector<int> d1(n);
    for (int i = 0; i < n; i++) {
      d1[i] = i > 0 ? d1[i - 1] : 0;
      if (freq[s[i] - 'a'] == 0) {
        d1[i]++;
      }
      freq[s[i] - 'a']++;
    }
    int f2[26] = {0};
    vector<int> d2(n);
    for (int i = n - 1; i >= 0; i--) {
      d2[i] = i < n - 1 ? d2[i + 1] : 0;
      if (f2[s[i] - 'a'] == 0) {
        d2[i]++;
      }
      f2[s[i] - 'a']++;
    }
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
      res = max(res, d1[i] + d2[i + 1]);
    }

    cout << res << endl;
  }
  return 0;
}