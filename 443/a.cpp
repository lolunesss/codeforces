#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[26] = {0};
  int count = 0;
  char c;
  while ((c = getchar()) != '}') {
    c -= 'a';
    if (c >= 0 && c < 26) {
      if (a[c] == 0) count++;
      a[c] = 1;
    }
  }

  cout << count << endl;
  return 0;
}

