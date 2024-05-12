/**
  * filename: b_commencement.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/10/2024 22:58:53
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


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vi cnt(26, 0), cnt2(101, 0);
  string str;
  cin >> str;
  rep (i, 0, SZ(str)) cnt.at(str[i] - 'a')++;

  rep (i, 0, 26) cnt2.at(cnt.at(i))++;

  rep (i, 1, 101) {
    if (cnt2.at(i) == 0 || cnt2.at(i) == 2) continue;
    cout << "No\n";
    return 0;
  }

  cout << "Yes\n";
  return 0;
}
