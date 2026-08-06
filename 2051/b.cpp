#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    long long d = n / (a + b + c) * 3;
    long long r = n % (a + b + c);
    d += (r > 0 ? 1 : 0) + (r > a ? 1 : 0) + (r > (a + b) ? 1 : 0);
    cout << d << endl;
  }
  return 0;
}
