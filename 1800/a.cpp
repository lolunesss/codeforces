#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string meow = "meow";
    int index = 0;
    bool is_cat = true;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == meow[index]) continue;
      index++;
      if (i != 0 && index < 4 && s[i] == meow[index]) continue;
      is_cat = false;
      break;
    }
    if (is_cat && index == 3) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}