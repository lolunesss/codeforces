#include <bits/stdc++.h>

using namespace std;

long long ipow(long long base, int exp) {
  long long res = 1;
  while (exp > 0) {
    if (exp % 2 == 1) res *= base;
    base *= base;
    exp /= 2;
  }
  return res;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int c1 = 0, c0 = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a == 1) c1++;
      if (a == 0) c0++;
    }
    cout << ipow(2, c0) * c1 << endl;
  }
  return 0;
}