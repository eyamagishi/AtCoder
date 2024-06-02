/**
    * filename: c.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/25/2024 20:43:58
    * result: 未提出
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
    int n, t;
    cin >> n >> t;
    vector<vector<bool>> bingo(n, vector<bool>(n, false));
    rep (i, 0, t) {
        int a;
        cin >> a;
        int tmp_y = a / n;
        int tmp_x = a % n - 1;
        bingo.at(tmp_x).at(tmp_y) = true;

        rep (y, 0, n) {
            bool flg = true;
            rep (x, 0, n) {
                if (!bingo.at(y).at(x)) {
                    flg = false;
                    break;
                }
            }
            if (flg) {
                cout << i << '\n';
                return 0;
            }
        }
    }

    cout << -1 << '\n';
    return 0;
}
