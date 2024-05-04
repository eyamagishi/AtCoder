/**
  * filename: d.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/04/2024 20:56:43
  * result: TLE → AC(時間外)
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
  int n, k;
  cin >> n >> k;

  vi pos(n, -1);
  rep (i, 0, n) {
    int tmp;
    cin >> tmp;
    --tmp;
    pos.at(tmp) = i;
  }

  set<int> st;
  rep (i, 0, k) st.insert(pos.at(i));
  int ans = *st.rbegin() - *st.begin();
  rep (i, k, n) {
    st.erase(pos.at(i - k));
    st.insert(pos.at(i));
    ans = min(ans, *st.rbegin() - *st.begin());
  }

  cout << ans << endl;
  return 0;
}
