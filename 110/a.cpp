#include <bits/stdc++.h>

using namespace std;

int count_ld(long long n) {
  int c = 0;
  while (n) {
    long long d = n % 10;
    if (d == 4 || d == 7) c++;
    n /= 10;
  } 
  return c;
}

int main() {
  long long n;
  cin >> n;
  int c = count_ld(n);
  cout << ((c == 4 || c == 7) ? "YES" : "NO") << endl;
  return 0;
}
