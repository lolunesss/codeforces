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
    if (ns[n - 1] == 1) {
      cout << "NO" << endl;
      continue;
    }

    cout << "YES" << endl;
    for (int i = n - 1; i >= 0;) {
      int c = 0;
      int k = i - 1;
      while (k >= 0 && ns[k] == 1) {
        c++;
        k--;
      }
      i = k;

      for (int j = 0; j < c; j++) {
        cout << 0 << " ";
      }
      cout << c << " ";
    }
    cout << endl;
  }
  return 0;
}