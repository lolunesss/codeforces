#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int c = 0;
  string res;
  while (s.find("WUB", c) != string::npos) {
    int r = s.find("WUB", c);
    string prefix = res == "" || res.back() == ' '? "": " ";
    res += prefix + s.substr(c, r - c);
    c = r + 3;
  }
  if (s.substr(c).size() > 0) {
    if (res.size() > 0) {
      cout << res + " " + s.substr(c) << endl;
    } else {
      cout << s.substr(c) << endl;
    }
  } else {
    cout << res << endl;
  }
  return 0;
}
