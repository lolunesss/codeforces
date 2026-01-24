#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

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
    int min_gcd = 1e7;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        min_gcd = min(min_gcd, gcd(ns[i], ns[j]));
      }
    }
    cout << (min_gcd <= 2 ? "YES" : "NO") << endl;
  }

  return 0;
}