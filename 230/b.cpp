#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long a) {
  long long d = 0;
  for (long long i = 2; i * i <= a; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}

bool isSquare(long long a) {
  long long root = static_cast<long long>(round(sqrt(a)));
  return root * root == a;
}

bool isTPrime(long long a) {
  return isSquare(a) && isPrime(static_cast<long long>(round(sqrt(a))));
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    cout << (a != 1 && isTPrime(a) ? "YES" : "NO") << endl;
  }
  return 0;
}
