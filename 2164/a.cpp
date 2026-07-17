#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    vector<long long> ns(n);
    for (auto& x : ns) {
      cin >> x;
    }
    long long x;
    cin >> x;
    int mi = *min_element(ns.begin(), ns.end());
    int ma = *max_element(ns.begin(), ns.end());
    if (x >= mi && x <= ma) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}