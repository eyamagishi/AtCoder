/**
    * filename: c_colorful_beans.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/25/2024 14:53:12
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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    map<int, int> map;
    rep (i, 0, n) {
        int a, c;
        cin >> a >> c;
        if (map.find(c) != map.end()) {
            map[c] = min(map[c], a);
        } else {
            map[c] = a;
        }
    }

    int ans = -1;
    for (auto [c, val] : map){
        ans = max(ans, val);
    }
    cout << ans << endl;
    return 0;
}
