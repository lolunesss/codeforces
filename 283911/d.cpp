#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ns(n);
  for (auto& ni : ns) {
    cin >> ni;
  }
  sort(ns.begin(), ns.end());
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    auto li = lower_bound(ns.begin(), ns.end(), l);
    auto ri = upper_bound(ns.begin(), ns.end(), r);
    cout << ri - li << " ";
  }
  cout << endl;
  return 0;
}