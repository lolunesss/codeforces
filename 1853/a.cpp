#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    int mini = 2e9;
    for (int i = 1; i < n; i++) {
      mini = min(ns[i] - ns[i - 1], mini);
    }
    if (mini < 0) {
      cout << 0 << endl;
    } else {
      cout << mini / 2 + 1 << endl;
    }
  }

  return 0;
}