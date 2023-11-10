#include <bits/stdc++.h>
using namespace std;

int add_dfs(string &s, int i) {
  if (i == 1) return atoi(s.c_str());
  int sum = 0;
  for(int i = 0; i < s.size(); i++) {
    sum += add_dfs(s, s.size());
  }
  return 0;
}

int main() {
  string s;
  cin >> s;
  int sum = add_dfs(s, s.size());
  cout << sum << endl;
}