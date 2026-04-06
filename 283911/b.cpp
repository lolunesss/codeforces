#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> ns(n);
  for (auto& ni : ns) {
    cin >> ni;
  }
  for (int i = 0; i < k; i++) {
    int ki;
    cin >> ki;
    auto it = upper_bound(ns.begin(), ns.end(), ki);
    int index = it - ns.begin();

    cout << max(0, index) << endl;
  }
  return 0;
}