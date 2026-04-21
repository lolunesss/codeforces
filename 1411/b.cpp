#include <bits/stdc++.h>

using namespace std;

bool is_fair(long long n) {
  long long int nc = n;
  while (nc) {
    long long r = nc % 10;
    if (r != 0 && n % r != 0) return false;
    nc /= 10;
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    while (!is_fair(n)) {
      n++;
    }
    cout << n << endl;
  }
  return 0;
}