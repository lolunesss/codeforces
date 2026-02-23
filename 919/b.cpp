#include <bits/stdc++.h>

using namespace std;

int is_perfect(int n) {
  int s = 0;
  while (n) {
    s += (n % 10);
    n /= 10;
  }
  return s == 10;
}

int main() {
  int n;
  cin >> n;
  int current = 18;
  int found = 0;
  while (found < n) {
    if (is_perfect(current)) found++;
    current++;
  }
  cout << current - 1 << endl;

  return 0;
}