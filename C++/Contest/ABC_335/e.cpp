#include <bits/stdc++.h>
using namespace std;

long max = 0;

long dfs(int y, int x, vector<vector<int>> &union_find);

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<vector<int>> union_find(n + 1, vector<int>(0));
  for (int i = 0; i < n; i++) cin >> a.at(i);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    union_find.at(u).push_back(v);
    union_find.at(v).push_back(u);
  }

  dfs(0, 0, union_find);
}
