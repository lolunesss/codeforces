#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> ns(n);
  for (auto& ni : ns) {
    cin >> ni;
  }
  long long m = *max_element(ns.begin(), ns.end());
  long long sd = 0;
  long long gd = LONG_LONG_MAX;
  for (auto ni : ns) {
    if (m > ni) {
      if (gd == LONG_LONG_MAX) {
        gd = m - ni;
      } else {
        gd = __gcd(gd, m - ni);
      }
    }
  }

  for (auto ni : ns) {
    sd += (m - ni) / gd;
  }
  cout << sd << " " << gd << endl;
  return 0;
}