/**
  * filename: e.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/01/2024 20:31:12
  * result: TLE
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
  vi a;
  cin >> n >> q;
  rep(i, 0, n) {
    int tmp;
    cin >> tmp;
    a.pb(tmp);
  }

  sort(rall(a));

  rep(i, 0, q) {
    int tmp;
    cin >> tmp;
    int j = 0;
    for (j; j < n; j++) {
      if (a.at(j) < tmp) break;
    }
    cout << j << endl;
  }
}
