#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    int ind = 1;
    while (n % ind == 0) {
      ind++;
    }
    cout << ind - 1 << endl;
  }
  return 0;
}