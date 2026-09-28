#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  
  bool restUpper = true;
  for (int i = 1; i < s.size(); i++) {
    restUpper = restUpper && isupper(s[i]);
  }

  if (restUpper) {
    for (auto x: s) {
      if (isupper(x)) cout << char(tolower(x));
      else cout << char(toupper(x));
    }
    cout << endl;
  } else {
    cout << s << endl;
  }
  return 0;
}
