/*---------------------------------------------------------------------------------------------------
　　　　　　　　　　　 ∧＿∧
　　　　　 ∧＿∧ 　（´<_｀ ）　 Welcome to My Coding Space!
　　　　 （ ´_ゝ`）　/　 ⌒i     @RyutaUrushi
　　　　／　　　＼　 　  |　|
　　　 /　　 /￣￣￣￣/　　|
　 ＿_(__ﾆつ/　    ＿/ .| .|＿＿＿＿
　 　　　＼/＿＿＿＿/　（u　⊃
---------------------------------------------------------------------------------------------------*/
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
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

vi honests[15];
vi liars[15];

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep (i, 0, n) {
    cin >> a.at(i);
    rep (j, 0, a.at(i)) {
      int x, y;
      cin >> x >> y;
      if (y == 0) liars[i].pb(x - 1);
      else honests[i].pb(x - 1);
    }
  }

  int ans = 0;
  rep (msk, 0, bit(n)) {
    bool ok = true;
    int tot = 0;
    rep (i, 0, n) if (msk & bit(i)) {
      tot++;
      fore (honest, honests[i]) if (!(msk & bit(honest))) ok = false;
      fore (liar, liars[i]) if (msk & bit(liar)) ok = false;
    }
    if (ok) ans = max(ans, tot);
  }

  cout << ans << '\n';
}
