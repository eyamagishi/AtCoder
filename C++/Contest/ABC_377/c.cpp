/**
 * filename: c.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/26/2024 21:11:22
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

    ll n, m;
    cin >> n >> m;

    unordered_set<ll> flg; // フラグを保持するセット
    unsigned long long ans = n * n;

    rep (i, 0, m) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        auto pos = [n](ll x, ll y) {
            return x * n + y;
        };
        if (!flg.count(pos(b, a))) {
            flg.insert(pos(b, a));
            ans--;
        }
        if (a + 2 < n && b + 1 < n && !flg.count(pos(b + 1, a + 2))) {
            flg.insert(pos(b + 1, a + 2));
            ans--;
        }
        if (a + 1 < n && b + 2 < n && !flg.count(pos(b + 2, a + 1))) {
            flg.insert(pos(b + 2, a + 1));
            ans--;
        }
        if (a - 1 >= 0 && b + 2 < n && !flg.count(pos(b + 2, a - 1))) {
            flg.insert(pos(b + 2, a - 1));
            ans--;
        }
        if (a - 2 >= 0 && b + 1 < n && !flg.count(pos(b + 1, a - 2))) {
            flg.insert(pos(b + 1, a - 2));
            ans--;
        }
        if (a - 2 >= 0 && b - 1 >= 0 && !flg.count(pos(b - 1, a - 2))) {
            flg.insert(pos(b - 1, a - 2));
            ans--;
        }
        if (a - 1 >= 0 && b - 2 >= 0 && !flg.count(pos(b - 2, a - 1))) {
            flg.insert(pos(b - 2, a - 1));
            ans--;
        }
        if (a + 1 < n && b - 2 >= 0 && !flg.count(pos(b - 2, a + 1))) {
            flg.insert(pos(b - 2, a + 1));
            ans--;
        }
        if (a + 2 < n && b - 1 >= 0 && !flg.count(pos(b - 1, a + 2))) {
            flg.insert(pos(b - 1, a + 2));
            ans--;
        }
    }

    cout << ans << '\n';
    return 0;
}

/* C - Avoid Knight Attack 解説 by MMNMM */
// #include <iostream>
// #include <set>
// #include <vector>

// int main() {
//     using namespace std;
//     int N, M;
//     cin >> N >> M;

//     // 置くことができないマスの集合
//     set<pair<int, int>> bad_cell;
//     // コマの動く先
//     vector<pair<int, int>> knight_move{{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
//     for (int i = 0; i < M; ++i) {
//         int x, y;
//         cin >> x >> y;
//         bad_cell.emplace(x, y);
//         for (const auto& [dx, dy] : knight_move)
//             // 取れる先が存在するマスなら
//             if (1 <= x + dx && x + dx <= N && 1 <= y + dy && y + dy <= N)
//                 bad_cell.emplace(x + dx, y + dy);
//     }

//     // マス全体から置けないマスを引いたものが答え
//     cout << static_cast<long>(N) * N - size(bad_cell) << endl;

//     return 0;
// }
