/**
  * filename: c_airport_code.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/13/2024 08:49:16
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
#define bit(n) (1LL << (n))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for(auto &i:a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()
#define tf(obj) transform((obj).begin(), (obj).end(), (obj).begin(), ::toupper) 


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s, t;
  cin >> s >> t;
  tf(s);
  s += 'X';
  int cnt = 0;
  rep (i, 0, SZ(s)) {
    if (s[i] == t[cnt]) {
      cnt++;
      if (cnt == SZ(t)) {
        cout << "Yes\n";
        return 0;
      }
    }
  }

  cout << "No\n";
  return 0;
}
