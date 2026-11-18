#include <bits/stdc++.h>

using namespace std;

bool isSolved(map<char, int> m) {
  if (m['0'] < 3) return false;
  if (m['1'] < 1) return false;
  if (m['2'] < 2) return false;
  if (m['3'] < 1) return false;
  if (m['5'] < 1) return false;
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t --) {
    int n;
    cin >> n;
    vector <int> ns(n);
    for (auto &x: ns) {
      cin >> x;
    }
    map<char, int> m;
    int index = -1;
    for (int i = 0; i < n; i++) {
      m[ns[i] + '0']++;
      if (isSolved(m)) {
        index = i;
        break;
      }
    }
    cout << index + 1 << endl;
  }
  return 0;
}
