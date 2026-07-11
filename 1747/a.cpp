#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    vector<long long> ns(n);
    long long sum = 0;
    for (auto& x : ns) {
      cin >> x;
      sum += x;
    }
    cout << (sum < 0 ? -sum : sum) << endl;
  }
  return 0;
}
