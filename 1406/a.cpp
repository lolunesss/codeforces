#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, num;
    cin >> n;
    int a[101] = {};
    for (int i = 0; i < n; i++) {
      cin >> num;
      a[num]++;
    }
    int s = 0;
    bool found_min = false;
    for (int i = 0; i < 101; i++) {
      if (a[i] == 1 && !found_min) {
        s += i;
        found_min = true;
      }
      if (a[i] == 0) {
        if (found_min)
          s += i;
        else
          s += 2 * i;
        break;
      }
    }
    cout << s << endl;
  }
  return 0;
}