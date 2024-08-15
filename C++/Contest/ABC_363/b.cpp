/**
 * filename: b.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/20/2024 21:02:49
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
#define fore(i, a) for (auto &i : a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, t, p, cnt = 0;
    cin >> n >> t >> p;
    vi l(n);
    vector<bool> l_flg(n, false);
    rep (i, 0, n) {
        cin >> l.at(i);
        if (t <= l.at(i)) {
            ++cnt;
            l_flg.at(i) = true;
        }
    }


    int days = 0;
    while(cnt < p) {
        ++days;
        rep (i, 0, n) {
            if (l_flg.at(i)) continue;
            ++l.at(i);
            if (t <= l.at(i)) {
                ++cnt;
                l_flg.at(i) = true;
            }
        }
    }

    cout << days << '\n';
    return 0;
}