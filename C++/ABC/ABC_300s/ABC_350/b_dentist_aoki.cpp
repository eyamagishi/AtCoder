/**
  * filename: b_dentist_aoki.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/02/2024 08:58:10
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
  int n, q;
  cin >> n >> q;
  int cnt = n;
  vi t(n, 1);
  rep (i, 0, q) {
    int tmp;
    cin >> tmp;
    --tmp;
    if (t.at(tmp) == 1) {
      t.at(tmp) = 0;
      --cnt;
    } else {
      t.at(tmp) = 1;
      ++cnt;
    }
  }
  cout << cnt << endl;
}
