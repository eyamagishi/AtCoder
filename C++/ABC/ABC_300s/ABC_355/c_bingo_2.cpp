/**
    * filename: c_bingo_2.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/26/2024 09:52:03
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
    int n, t;
    cin >> n >> t;
    vi a(t), row(n, 0), col(n, 0), diag(2, 0);
    rep (i, 0, t) {
        cin >> a.at(i);
        a.at(i)--;
    }
    rep (i, 0, t) {
        int x = a.at(i) / n;
        int y = a.at(i) % n;

        // 横
        row[x]++;
        if (row[x] == n) {
            cout << i + 1 << '\n';
            return 0;
        }

        // 縦
        col[y]++;
        if (col[y] == n) {
            cout << i + 1 << '\n';
            return 0;
        }

        // 左上 - 右下 方向の斜め
        if (x == y) {
            diag[0]++;
            if (diag[0] == n) {
                cout << i + 1 << '\n';
                return 0;
            }
        }

        // 右上 - 左下 方向の斜め
        if (x + y == n - 1) {
            diag[1]++;
            if (diag[1] == n) {
                cout << i + 1 << '\n';
                return 0;
            }
        }
    }

    cout << -1 << '\n';
    return 0;
}
