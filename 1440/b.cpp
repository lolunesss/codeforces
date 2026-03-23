#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> ns(n * k);
    for (int i = 0; i < n * k; i++) {
      cin >> ns[i];
    }
    int e = n * k;
    int nm = (n + 1) / 2 - 1;
    long long sum = 0;
    int d = (n - nm - 1);
    int si = e - 1;
    for (int i = 0; i < k; i++) {
      sum += ns[si - d];
      si = si - d - 1;
    }
    cout << sum << endl;
  }
}