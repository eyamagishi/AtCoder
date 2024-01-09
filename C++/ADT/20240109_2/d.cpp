/**
  * filename: d.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 01/09/2024 17:42:05
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
  int h, w;
  cin >> h >> w;
  vs s(h);
  rep (i, 0, h) cin >> s.at(i);

  int y_s = -1, x_s = -1;
  rep (y, 0, h) {
    rep (x, 0, w) {
      if (s.at(y)[x] == '-') continue;
      if (y_s == -1 && x_s == -1) {
        y_s = y;
        x_s = x;
        continue;
      }
      int dist = abs(x_s - x) + abs(y_s - y);
      cout << dist << '\n';
      return 0;
    }
  }
}
