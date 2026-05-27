#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long s = 10;
    vector<long long> res;
    for (int i = 0; i <= 17; i++) {
      if (n % (s + 1) == 0) {
        res.push_back(n / (s + 1));
      }
      s *= 10;
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    if (res.size() > 0) {
      for (auto a : res) {
        cout << a << " ";
      }
      cout << endl;
    }
  }
  return 0;
}