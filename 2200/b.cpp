#include <bits/stdc++.h>

using namespace std;

bool is_nondecreasing(vector<int> n) {
  int a = n[0];
  for (int i = 0; i < n.size(); i++) {
    if (n[i] < a) {
      return false;
    }
    a = n[i];
  }
  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    if (is_nondecreasing(ns)) {
      cout << ns.size() << endl;
    } else {
      cout << 1 << endl;
    }
  }
  return 0;
}