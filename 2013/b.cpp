#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> ns(n);
    for (auto &x: ns) {
      cin >> x;
    }
    long long sum = 0;
    for (int i = 0; i < n - 2; i++) {
      sum += ns[i];
    }
    cout << ns[n - 1] - ns[n - 2]  + sum << endl;
  }

  return 0;
}
