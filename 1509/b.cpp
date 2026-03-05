#include <bits/stdc++.h>

using namespace std;

bool is_tmt(string s) {
  int n = s.size();
  int tc = 0, mc = 0;
  for (char c : s) {
    if (c == 'T')
      tc++;
    else
      mc++;
  }
  if (mc * 2 != tc) {
    return false;
  }

  tc = 0;
  mc = 0;
  for (char c : s) {
    if (c == 'T')
      tc++;
    else
      mc++;
    if (mc > tc) {
      return false;
    }
  }
  tc = 0;
  mc = 0;
  for (int i = n - 1; i >= 0; i--) {
    char c = s[i];
    if (c == 'T')
      tc++;
    else
      mc++;
    if (mc > tc) {
      return false;
    }
  }

  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    cout << (is_tmt(s) ? "YES" : "NO") << endl;
  }
  return 0;
}