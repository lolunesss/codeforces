#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int x = (n / m) * b + a * (n % m);
  int y = (n + m - 1) / m * b; 
  cout << min(x , min(y, n * a)) << endl;
  return 0;
}
