/**
  * filename: c_sigma_problem.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/12/2024 17:50:55
  * result: AC(2)
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
#define bit(n) (1LL << (n))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for(auto &i:a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()

// 1.0 × 10^8
const int __MOD = 100000000;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vi a(n);
  rep (i, 0, n) cin >> a.at(i);
  // 昇順に並び替え
  sort(all(a)); 
  int r = n;
  ll cnt = 0, res = 0;
  // 尺取り法
  rep (i, 0, n - 1) {
    r = max(r, i + 1);
    while (r - 1 > i && a[r - 1] + a[i] >= __MOD) {
      r--;
    }
    cnt += n - r;
  }
  rep (i, 0, n) res += ll(a[i]) * (n - 1);
  res -= cnt * __MOD;
  cout << res << '\n';
  return 0;
}
