#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    int n01 = 0;
    int n10 = 0;
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
      if (i % 2 == 0 && ns[i] % 2 == 1) {
        n01++;
      } else if (i % 2 == 1 && ns[i] % 2 == 0) {
        n10++;
      }
    }
    if (n01 == n10) {
      cout << n01 << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}