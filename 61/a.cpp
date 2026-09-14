#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    int a = s[i] - '0';
    int b = t[i] - '0';
    cout << (a ^ b);
  }
  cout << endl;
  return 0;
}
