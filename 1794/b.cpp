#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
      if (ns[i] == 1) ns[i]++;
    }
    for (int i = 0; i < n - 1; i++) {
      if (ns[i + 1] % ns[i] == 0) {
        ns[i + 1]++;
      }
      cout << ns[i] << " ";
    }
    cout << ns[n - 1] << endl;
  }
  return 0;
}