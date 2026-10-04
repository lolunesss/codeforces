#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int ls = c * d;
  int dl = k * l;
  int one_round = n * nl;
  int rounds = dl / one_round;

  int salt_per_round = np * n;
  int salt_rounds = p / salt_per_round;

  int l_per_round = n;
  int l_rounds = ls / n;

  cout << min(min(rounds, salt_rounds), l_rounds) << endl;
  return 0;
}
