#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int prev = INT_MAX;
    bool possible = false;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a >= prev) possible = true;
      prev = a;
    }
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
}