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
    bool found = 0;
    for (int i = 1; i < n - 1; i++) {
      if (ns[i] > ns[i - 1] && ns[i] > ns[i + 1]) {
        cout << "YES" << endl;
        cout << i << " " << i + 1 << " " << i + 2 << endl;
        found = 1;
        break;
      }
    }
    if (!found) cout << "NO" << endl;
  }
  return 0;
}