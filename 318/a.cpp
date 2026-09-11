#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  long long o = (n + 1) / 2;
  if (k <= o) {
    cout << 2 * k - 1 << endl;
    return 0;
  } else {
    cout << 2 * (k - o) << endl;
  }
  return 0;
}
