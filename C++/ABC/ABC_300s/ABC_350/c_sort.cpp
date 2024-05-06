/**
  * filename: c_sort.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/04/2024 18:26:48
  * result: AC
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


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vi a(n);
  rep(i, 0, n) {
    int tmp;
    cin >> tmp;
    --tmp;
    a.at(i) = tmp;
  }

  vector<pair<int, int>> op;
  rep (i, 0, n) {
    while (a[i] != i) {
      op.push_back({i + 1, a[i] + 1});
      swap(a[i], a[a[i]]);
    }
  }

  cout << SZ(op) << "\n";
  for (auto [x, y] : op) cout << x << " " << y << "\n";
  return 0;
}
