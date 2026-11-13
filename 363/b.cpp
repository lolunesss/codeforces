#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> ns(n);
  for (auto &i: ns) {
    cin >> i;
  }
  int sum = accumulate(ns.begin(), ns.begin() + k, 0);
  int min_sum = sum;
  int index = 0;
  for (int i = k; i < n; i++) {
    sum = sum + ns[i] - ns[i - k];
    if (min_sum > sum) {
      index = i - k + 1;
      min_sum = sum;
    }
  }
  cout << index + 1 << endl;
  return 0;
}
