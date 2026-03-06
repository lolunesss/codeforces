#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ns(n);
  vector<int> ons;
  int prev = -1;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (i != 0) {
      int k = __gcd(prev, a);
      if (k > 1) ons.push_back(1);
    }
    ons.push_back(a);
    prev = a;
  }
  cout << ons.size() - n << endl;
  for (int i = 0; i < ons.size(); i++) {
    cout << ons[i] << " \n"[i == ons.size() - 1];
  }
  return 0;
}