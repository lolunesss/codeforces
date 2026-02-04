#include <bits/stdc++.h>

using namespace std;

int power(int n, int k) {
  if (k == 0) return 1;
  int s = power(n, k / 2) % 100;
  if (k & 1) {
    return (n * s * s) % 100;
  } else {
    return (s * s) % 100;
  }
}

int main() {
  long long int n;
  cin >> n;
  cout << power(5, n) << endl;

  return 0;
}