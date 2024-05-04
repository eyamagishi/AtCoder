/**
  * filename: b.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/04/2024 20:56:36
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
  string s, t;
  cin >> s >> t;
  int cnt = 0;
  vi num;
  rep (i, 0, SZ(s)) {
    while (s[i] != t[cnt]) {
      cnt++;
    }
    cnt++;
    num.pb(cnt);
  }

  rep (i, 0, SZ(num)) {
    cout << num.at(i);
    if (i != SZ(num) - 1) cout << ' ';
  }
  cout << endl;
  return 0;
}
