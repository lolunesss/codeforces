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
    int ma = *max_element(ns.begin(), ns.end());
    int mi = *min_element(ns.begin(), ns.end());
    int a1 = ma - ns[0];
    int a2 = ns[ns.size() - 1] - mi;

    int result = 0;
    for (int i = 0; i < n; i++) {
      result = max(result, ns[i] - ns[(i + 1) % n]);
    }

    result = max(result, a1);
    result = max(result, a2);
    cout << result << endl;
  }
  return 0;
}