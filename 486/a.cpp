#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;
  long long pn = n < 0 ? -n : n;
  cout << (n % 2 ? "-": "") << (pn + 1) / 2 << endl;
  return 0;
}
