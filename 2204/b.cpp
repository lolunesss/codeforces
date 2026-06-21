#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> ns(n);
    for (auto& i : ns) {
      cin >> i;
    }
    long long v = ns[0];
    int c = 1;
    for (int i = 1; i < n; i++) {
      if (ns[i] >= v) {
        c++;
        v = ns[i];
      }
    }
    cout << c << endl;
  }
  return 0;
}