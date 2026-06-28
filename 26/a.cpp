#include <bits/stdc++.h>

using namespace std;
bool is_prime(int n) {
  if (n == 2) return 2;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

bool is_almost_prime(int n) {
  int d = 0;
  for (int i = 2; i < n; i++) {
    if (is_prime(i) && n % i == 0) {
      d++;
    }
  }
  return d == 2;
}

int main() {
  int n;
  cin >> n;
  int c = 0;
  for (int i = 2; i <= n; i++) {
    if (is_almost_prime(i)) {
      c++;
    }
  }
  cout << c << endl;
}