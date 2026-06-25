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
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (ns[j] > ns[i]) {
          ns[j] = ns[i];
          break;
        }
      }
    }
    long long s = 0;
    for (int i = 0; i < n; i++) {
      s += ns[i];
    }

    cout << s << endl;
  }
  return 0;
}