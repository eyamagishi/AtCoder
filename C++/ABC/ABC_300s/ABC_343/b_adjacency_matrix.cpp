/**
    * filename: b_adjacency_matrix.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/12/2024 09:06:53
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
    vvi a(n, vi(n));
    rep (y, 0, n) rep (x, 0, n) cin >> a.at(y).at(x);

    rep (y, 0, n) {
        bool space = false;
        rep (x, 0, n) {
            if (a.at(y).at(x) == 1) {
                if (space) {
                    cout << ' ' << x + 1;
                } else {
                    cout << x + 1;
                    space = true;
                }
            }
        }
        cout << '\n';
    }

    return 0;
}

// B - Adjacency Matrix 解説 by cn449

// 2 重 for 文などを用いて、i=1,2,…,N の順にどの頂点が頂点 i と直接結ばれているか判s定すればよいです。

/* 実装例 */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<vector<int>> a(n, vector<int>(n));
//     for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
//     for (int i = 0; i < n; i++) {
//         vector<int> v;
//         for (int j = 0; j < n; j++) if (a[i][j]) v.push_back(j + 1);
//         int sz = v.size();
//         for (int j = 0; j < sz; j++) {
//             cout << v[j];
//             if (j != sz - 1) cout << ' ';
//         }
//         cout << '\n';
//     }
// }
