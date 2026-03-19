#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s) {
  int index = s.size() - 1;
  int i = 0;
  while (i < index) {
    if (s[i] != s[index]) return false;
    i++;
    index--;
  }
  return true;
}

bool is_all_same(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] != s[0]) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < k; i++) {
      if (is_palindrome(s)) {
        if (is_all_same(s)) {
          s.append(k - i, s[s.size() - 1]);
          break;
        }
        s.append(1, s[s.size() - 1]);
      } else {
        s = s.substr(0, s.size() / 2);
      }
    }
    cout << s << endl;
  }

  return 0;
}