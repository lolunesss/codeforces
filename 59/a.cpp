#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;
  cin >> input;
  int lc = 0;
  for (auto ch : input) {
    if (islower(ch)) {
      lc++;
    }
  }
  int lh = input.size() - lc;
  if (lc >= lh) {
    transform(input.begin(), input.end(), input.begin(),
              [](unsigned char c) { return tolower(c); });
    cout << input << endl;
  } else {
    transform(input.begin(), input.end(), input.begin(),
              [](unsigned char c) { return toupper(c); });
    cout << input << endl;
  }
  return 0;
}