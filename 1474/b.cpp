#include <bits/stdc++.h>

using namespace std;

#define PRIME 0
#define NOT_PRIME 1

int main() {
  int primes[100001] = {PRIME};
  primes[0] = primes[1] = NOT_PRIME;

  vector<int> ps;
  for (int i = 2; i * i <= 100000; i++) {
    if (primes[i] == PRIME) {
      for (int j = i + i; j <= 100000; j += i) {
        primes[j] = NOT_PRIME;
      }
    }
  }
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long d = n + 1;
    for (; d <= 100001; d++) {
      if (primes[d] == PRIME) break;
    }
    long long d2 = d + n;
    for (; d2 <= 100001; d2++) {
      if (primes[d2] == PRIME) break;
    }
    // cout << d << " " << d2 << endl;
    cout << min(d * d * d, d * d2) << endl;
  }
  return 0;
}