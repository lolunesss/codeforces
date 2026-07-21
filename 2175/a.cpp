#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    vector <int> ns(n);
    set<int> s;
    for (auto &x: ns) {
      cin >> x;
      s.insert(x);
    }
    sort(ns.begin(), ns.end());
    cout << *lower_bound(ns.begin(), ns.end(), s.size()) << endl;
  } 

  return 0;
}
