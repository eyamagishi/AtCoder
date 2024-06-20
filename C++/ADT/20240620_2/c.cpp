/**
    * filename: c.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/20/2024 18:31:08
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
    int n, d;
    cin >> n >> d;
    vector<vector<char>> s(n, vector<char>(d));
    rep (y, 0, n) {
        rep (x, 0, d) {
            cin >> s.at(y).at(x);
        }
    }
    vector<bool> flg(d, true);
    rep (y, 0, n) {
        rep (x, 0, d) {
            if(s.at(y).at(x) == 'x') flg.at(x) = false;
        }
    }

    int length = 0, max_length = -1;
    rep (i, 0, d) {
        if (flg.at(i)) {
            ++length;
        } else {
            max_length = max(max_length, length);
            length = 0;
        }
    }
    max_length = max(max_length, length);

    cout << max_length << '\n';
    return 0;
}
