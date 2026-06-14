#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> as(n);
    vector<long long> bs(n);
    for (auto& a : as) {
      cin >> a;
    }
    for (auto& a : bs) {
      cin >> a;
    }
    for (int i = 0; i < n; i++) {
      if (as[i] > bs[i]) {
        swap(as[i], bs[i]);
      }
    }
    long long s = accumulate(bs.begin(), bs.end(), 0LL);
    cout << s + (*max_element(as.begin(), as.end())) << endl;
  }
}