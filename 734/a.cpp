#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ac = 0, dc = 0;
  for (auto c: s) {
    if (c == 'A') ac++;
    if (c == 'D') dc++;
  }
  if (ac == dc) cout << "Friendship" << endl;
  else if (ac > dc) cout << "Anton" << endl;
  else cout << "Danik" << endl;
  return 0;
}
