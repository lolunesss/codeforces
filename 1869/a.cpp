#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto& a : ns) {
      cin >> a;
    }
    if (n & 1) {
      cout << 4 << endl;
      cout << 1 << " " << n << endl;
      cout << 1 << " " << n - 1 << endl;
      cout << 2 << " " << n << endl;
      cout << 2 << " " << n << endl;
    } else {
      cout << 2 << endl;
      cout << 1 << " " << n << endl;
      cout << 1 << " " << n << endl;
    }
  }
  return 0;
}