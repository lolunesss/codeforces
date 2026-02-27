#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a;
    int maxi = INT_MIN;
    int mc = 0;
    cin >> a;
    for (int i = 0; i < a; i++) {
      int n;
      cin >> n;
      if (n > maxi) {
        maxi = max(maxi, n);
        mc = 1;
      } else if (n == maxi) {
        mc++;
      }
    }

    cout << mc << endl;
  }
  return 0;
}