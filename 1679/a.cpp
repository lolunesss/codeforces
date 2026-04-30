#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;

    if (n & 1 || n <= 3) {
      cout << -1 << endl;
      continue;
    }

    long long int min = n / 4;
    long long int r4 = n % 4;

    long long int max = n / 6;
    long long int r6 = n % 6;
    if (r6) {
      max += 1;
    }
    cout << max << " " << min << endl;
  }
  return 0;
}