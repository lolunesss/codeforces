#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> ns(7);
    cin >> ns[0] >> ns[1] >> ns[2] >> ns[3] >> ns[4] >> ns[5] >> ns[6];
    sort(ns.begin(), ns.end());
    int sum = 0;
    for (int i = 0; i < 6; i++) {
      sum += -1 * ns[i];
    }
    sum += ns[6];
    cout << sum << endl;
  }
  return 0;
}