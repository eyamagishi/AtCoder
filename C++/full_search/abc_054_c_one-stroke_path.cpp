/**
  * filename: abc_054_c_one-stroke_path.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 01/10/2024 08:42:17
  * result: 
  **/
#include <bits/stdc++.h>
using namespace std;

/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using vb = vector<bool>;
using pii = pair<int, int>;

/* define short */
#define pb push_back
#define mp make_pair
#define SZ(x) ((int)(x).size())
#define bit(n) (1LL<<(n))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i,a) for(auto &i:a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()

void dfs(int v, vvi &g, vector<bool> &checked, int &cnt) {
  bool end = true;
  for (int i = 0; i < checked.size(); ++i) if (!checked[i] && i != v) end = false;
  if (end) {
      ++cnt;
      return;
  }

  checked[v] = true;
  for (auto nv : g[v]) {
      if (checked[nv]) continue;
      dfs(nv, g, checked, cnt);
  }
  checked[v] = false;
}

int main() {
  int n, m;
  cin >> n >> m;
  vvi g(n);
  rep (i, 0, m) {
    int a, b;
    cin >> a >> b;
    --a;--b;
    g.at(a).pb(b);
    g.at(b).pb(a);
  }

  vector<bool> checked(n, false);
  int cnt = 0;
  dfs(0, g, checked, cnt);
  cout << cnt << endl;
}
