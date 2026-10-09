#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  k = 240 - k;
  int c = 0;
  int s = 0;
  int i = 1;
  while (i <= n && s + i * 5 <= k) {
    s += i * 5;
    i++;
    c++;
  }
  cout << c << endl;

  return 0;
} 
