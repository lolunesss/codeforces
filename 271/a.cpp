#include <bits/stdc++.h>

using namespace std;

bool is_year(int n) {
  int arr[10] = {0};
  while (n) {
    if (arr[n % 10] == 1) return false;
    arr[n % 10] = 1;
    n /= 10;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  n++;
  while (n < 10000) {
    if (is_year(n)) {
      cout << n << endl;
      break;
    }
    n++;
  }
  return 0;
}