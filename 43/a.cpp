#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    m[s]++;
  }

  int max_score = 0;
  string team_name = "";
  for (const auto [team, score]: m) {
    if (score > max_score) {
      max_score = score;
      team_name = team;
    } 
  }
  cout << team_name << endl;
  return 0;
}
