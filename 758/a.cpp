#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ns(n);
  for (int i = 0; i < n; i++) {
    cin >> ns[i];
  }
  int maxi = *max_element(ns.begin(), ns.end());
  int total = 0;
  for (auto x : ns) {
    total += maxi - x;
  }
  cout << total << endl;
  return 0;
}