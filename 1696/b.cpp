#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) {
      cin >> x;
    }
    int prev = 0;
    int count = 0;
    for (auto x : v) {
      if (x != 0) {
        if (prev == 0) count++;
        prev = 1;
      } else {
        prev = 0;
      }
    }
    // if (count == 3) {
    //   for (auto x : v) {
    //     cout << x << " ";
    //   }
    // }
    count = min(count, 2);
    cout << count << endl;
  }
  return 0;
}