/**
  * filename: g.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 01/09/2024 18:17:08
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
  string X;
  cin >> X;
  vi pos(26);
  rep (i, 0, 26) pos[X[i] - 'a'] = i;
  int N;
  cin >> N;
  vs S(N);
  fore(s, S) cin >> s;
  sort(all(S), [&](const string& s, const string& t) {
    // 文字列の比較
    int len = min(size(s), size(t));
    rep (i, 0, len) {
      if (s[i] != t[i]) return pos[s[i] - 'a'] < pos[t[i] - 'a'];
    }
    return size(s) < size(t);
  });
  fore (s, S) cout << s << '\n';
}
