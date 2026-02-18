#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      ns.push_back(a);
    }
    int index = 0;
    while (index < n && ns[index] == 0) {
      index++;
    }
    long long int count = 0;
    for (; index < n - 1; index++) {
      count += max(ns[index], 1);
    }
    cout << count << endl;
  }
  return 0;
}