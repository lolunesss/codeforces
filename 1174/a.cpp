#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ns(2 * n);
  for (auto& ni : ns) {
    cin >> ni;
  }
  bool all_equal = true;
  sort(ns.begin(), ns.end());
  for (int i = 1; i < ns.size(); i++) {
    if (ns[i] != ns[i - 1]) {
      all_equal = false;
    }
  }
  if (all_equal) {
    cout << -1 << endl;
  } else {
    for (auto ni : ns) {
      cout << ni << " ";
    }
    cout << endl;
  }
  return 0;
}