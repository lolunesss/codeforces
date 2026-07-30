#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    long long ma = 0;
    for (int i = 0; i < n - 1; i++) {
      long long a;
      cin >> a;
      if (a > ma) ma = a;
    }
    long long l;
    cin >> l;
    cout << ma + l << endl;
  }
  return 0;
}
