#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int m = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      m = max(m, a);
    }
    cout << m << endl;
  }
  return 0;
}