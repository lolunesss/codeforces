#include <bits/stdc++.h>

#define PRIME 0
#define NOT_PRIME 1

using namespace std;

int main() {
  int primes[1001] = {PRIME};
  primes[0] = primes[1] = NOT_PRIME;

  vector<int> ps;
  for (int i = 2; i * i <= 1000; i++) {
    if (primes[i] == PRIME) {
      for (int j = i + i; j <= 1000; j += i) {
        primes[j] = NOT_PRIME;
      }
    }
  }
  for (int i = 2; i < 1001; i++) {
    if (primes[i] == PRIME) {
      ps.push_back(i);
    }
  }
  int n, k;
  cin >> n >> k;
  int count = 0;
  for (int i = 0; i < ps.size() - 1; i++) {
    int v = ps[i] + ps[i + 1] + 1;
    if (v >= 2 && v <= n && primes[v] == PRIME) {
      count++;
    }
  }
  if (count >= k) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}