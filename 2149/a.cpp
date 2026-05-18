#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto& ni : ns) {
      cin >> ni;
    }
    int zc = 0;
    int nc = 0;
    for (auto ni : ns) {
      if (ni < 0) nc++;
      if (ni == 0) zc++;
    }
    cout << zc + (nc & 1 ? 2 : 0) << endl;
  }
  return 0;
}