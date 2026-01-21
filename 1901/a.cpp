#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    int min = ns[0];
    for (int i = 1; i < n; i++) {
      min = max(min, ns[i] - ns[i - 1]);
    }
    min = max(min, 2 * (x - ns.back()));
    cout << min << endl;
  }
  return 0;
}
