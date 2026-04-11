#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto& ni : ns) {
      cin >> ni;
    }
    int mini = *min_element(ns.begin(), ns.end());

    int sd = 0;
    for (auto ni : ns) {
      sd += ni - mini;
    }
    cout << sd << endl;
  }
  return 0;
}