#include <bits/stdc++.h>

using namespace std;

long long solve(long long n) {
  if (n == 0) {
    return 0;
  }
  long long a = solve (n / 10);
  if (a == 0) {
    long long c = n % 10;
    c = c <= 4 ? c : 9 - c;
    if (c == 0) return 9;
    return c;
  } else {
    long long b = n % 10 <= 4 ? n % 10 : 9 - n % 10;
    return a * 10 + b;
  }
}

int main() {
  long long n;
  cin >> n;
  cout << solve(n) << endl;
  return 0;
}
