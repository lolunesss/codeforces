#include <bits/stdc++.h>

using namespace std;

int min_for(string s, char a, char b) {
  size_t last_b = s.rfind(b);
  if (last_b == string::npos || last_b == 0) {
    return INT_MAX;
  }
  size_t a_b = s.rfind(a, last_b - 1);
  if (a_b == string::npos) return INT_MAX;

  return s.size() - a_b - 2;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    int c00 = min_for(s, '0', '0');
    int c25 = min_for(s, '2', '5');
    int c75 = min_for(s, '7', '5');
    int c50 = min_for(s, '5', '0');
    cout << min(c50, min(c00, min(c75, c25))) << endl;
  }
  return 0;
}