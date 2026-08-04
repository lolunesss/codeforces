#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char prev = '*';
    s += '*';
    int c = 0;
    int r = 0;
    for (int i = 0; i < n + 1; i++) {
      if (prev == '*') {
	if (s[i] == '#') {
	  c = 1;
	}
      } else if (prev == '#') {
	if (s[i] == '#') c++;
	else {
	  r = max(r, c);
	  c = 0;
	}
      }
      prev = s[i];
    }
    cout << (r + 1) / 2 << endl;
  }
  return 0;
}
