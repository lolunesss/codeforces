#include <bits/stdc++.h>

using namespace std;
long long solve(long long a, long long b) {
  int c = 0;
  int ls = 1;
  while (true) {
    if (a < ls) {
      break;
    }
    c++;
    a -= ls;
    ls *= 2;
    if (b < ls) {
      break;
    }
    c++;
    b -= ls;
    ls *= 2;
  }
  return c;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    cout << max(solve(a, b), solve(b, a)) << endl;
  }
  return 0;
}