#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    vector<bool> had(n, false);
    int current = 0;
    had[current] = true;
    int c = 1;
    for (int i = 0; i < n; i++) {
      int step = s[current] == 'R' ? 1 : -1;
      current += step;
      if (!had[current]) c++;
      had[current] = true;
    }
    cout << c << endl;
  }
  return 0;
}