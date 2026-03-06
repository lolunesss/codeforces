#include <bits/stdc++.h>

using namespace std;

int suneet_wins(int a1, int a2, int b1, int b2) {
  int s = 0, sl = 0;
  if (a1 < b1)
    sl++;
  else if (a1 > b1)
    s++;

  if (a2 < b2)
    sl++;
  else if (a2 > b2)
    s++;

  return s > sl ? 1 : 0;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int s = 0;
    s += suneet_wins(a1, a2, b1, b2);
    s += suneet_wins(a1, a2, b2, b1);
    s += suneet_wins(a2, a1, b1, b2);
    s += suneet_wins(a2, a1, b2, b1);
    cout << s << endl;
  }
  return 0;
}