#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b, n;
    cin >> a >> b >> n;

    vector<long long> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    sort(ns.begin(), ns.end());
    long long int total = 0;
    total += min(b, a) - 1;
    b = 1;
    for (int i = 0; i < n; i++) {
      total += min(b + ns[i], a) - 1;
      // cout << "t : " << total << " " << min(b + ns[i], a) << endl;
      b = 1;
    }
    cout << total + 1 << endl;
  }
  return 0;
}