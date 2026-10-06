#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int mini, maxi, a;
  cin >> mini;
  maxi = mini;
  int amazing_count = 0;
  for (int i = 0; i < n - 1; i++) {
    cin >> a;
    if (a > maxi) {
      amazing_count++;
      maxi = a;
    }
    if (a < mini) {
      amazing_count++;
      mini = a;
    }
  }
  cout << amazing_count << endl;
  return 0;
}
