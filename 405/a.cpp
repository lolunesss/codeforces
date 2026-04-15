#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ns(n);
  for (auto& ni : ns) {
    cin >> ni;
  }
  sort(ns.begin(), ns.end());
  for (auto ni : ns) {
    cout << ni << " ";
  }
  cout << endl;
}