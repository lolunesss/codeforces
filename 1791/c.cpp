#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int i = 0, j = n - 1;
    while (i < j && s[i] != s[j]) {
      i++;
      j--;
    }
    cout << max(n - 2 * i, 0) << endl;
  }
  return 0;
}