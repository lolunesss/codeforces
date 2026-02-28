#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    stack<char> st;
    for (int i = 0; i < n; i++) {
      if (st.empty()) {
        st.push(s[i]);
        continue;
      } else if (s[i] == st.top()) {
        st.pop();
      } else {
        st.push(s[i]);
      }
    }
    cout << (st.empty() ? "YES" : "NO") << endl;
  }
  return 0;
}