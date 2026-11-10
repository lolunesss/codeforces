#include <bits/stdc++.h>

using namespace std;

bool check_and_set(vector<string> &board, int a, int b) {
  int n = board.size();
  if (a < 0 || a > n -1) return false;
  if (b < 0 || b > n -1) return false;
  if (board[a][b] == '#') return false;
  board[a][b] = '#';
  return true;
}

bool solve(vector<string> b) {
  int n = b.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i][j] == '.') {
        if (!check_and_set(b, i, j) || !check_and_set(b, i + 1, j) ||
            !check_and_set(b, i + 1, j - 1) ||
            !check_and_set(b, i + 1, j + 1) ||
            !check_and_set(b, i + 2, j)) {
          return false;
        }
      }
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<string> ss(n);
  for (auto &x: ss) {
    cin >> x;
  }
  cout << (solve(ss) ? "YES" : "NO") << endl;
  return 0;
}
