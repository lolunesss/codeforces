#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> ns(n);
    for (auto& i : ns) {
      cin >> i;
    }
    long long ma = *max_element(ns.begin(), ns.end());
    long long mi = *min_element(ns.begin(), ns.end());
    cout << ma - mi + 1 << endl;
  }
  return 0;
}