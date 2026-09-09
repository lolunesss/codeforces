#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  string print = "NO";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
      print = "YES";
    }
  }
  cout << print << endl;
  return 0;
}
