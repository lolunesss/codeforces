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
    int k = n;
    int index = 0;
    while (index < n && ns[index] == k) {
      index++;
      k--;
    }

    // cout << index << " " << k << endl;
    int ei = index;
    while (ei < n && ns[ei] != k) {
      ei++;
    }
    // cout << index << " " << k << " " << ei << endl;
    reverse(ns.begin() + index, ns.begin() + ei + 1);

    for (auto ni : ns) {
      cout << ni << " ";
    }
    cout << endl;
  }
  return 0;
}