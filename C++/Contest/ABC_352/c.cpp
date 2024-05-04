/**
  * filename: c.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/04/2024 20:56:39
  * result: AC(1)
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
  int n, def = -1, def_pos = -1;
  cin >> n;
  vi a(n), b(n);
  rep(i, 0, n) {
    cin >> a.at(i);
    cin >> b.at(i);
    if (def < b.at(i) - a.at(i)) {
      def = b.at(i) - a.at(i);
      def_pos = i;
    }
  }

  ll sum = 0;
  rep (i, 0, n) {
    if (i == def_pos) {
      sum += b.at(i);
    } else {
      sum += a.at(i);
    }
  }
  
  cout << sum << endl;
  return 0;
}
