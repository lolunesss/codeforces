#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;
  int cost = k * w * (w + 1) / 2;
  int load = n - cost;
  cout << max(-load, 0) << endl;
}