#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long sum = 0;
  vector<int> ns(n);
  for (auto &x: ns) {
    cin >> x;
    sum += x;
  }
  sort(ns.begin(), ns.end(), greater<int>());
  long long rs = 0;
  int index = 0;
  while (index < n && rs <= sum) {
    rs += ns[index];
    sum -= ns[index];
    index++;
  }
  cout << index << endl;
  return 0;
}
