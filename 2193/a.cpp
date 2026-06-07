#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> ns(n);
    int sum = 0;
    for (auto& ni : ns) {
      cin >> ni;
      sum += ni;
    }
    if (s >= sum && (sum - s) % x == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}