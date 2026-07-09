#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto& ni : ns) {
      cin >> ni;
    }
    int index = 0;
    while (index < n && ns[index] == 0) index++;
    int rindex = n - 1;
    while (rindex >= 0 && ns[rindex] == 0) rindex--;
    if (index > rindex) {
      cout << 0 << endl;
    } else {
      int zc = 0;
      for (int i = index; i <= rindex; i++) {
        if (ns[i] == 0) zc++;
      }
      if (zc == 0) {
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    }
  }
  return 0;
}