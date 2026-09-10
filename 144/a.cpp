#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ns(n);
  int min = INT_MAX;
  int mini = 0;
  int max = 0;
  int maxi = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x <= min) {
      min = x;
      mini = i;
    }
    if (x > max) {
      max = x;
      maxi = i;
    }
  }
  cout << maxi + (n - 1 - mini) + (mini < maxi ? -1 : 0) << endl;
  return 0;
}
