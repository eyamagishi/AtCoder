/**
 * filename: b.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/30/2024 21:15:26
 * result: 解説AC
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
    string s, t;
    cin >> s >> t;
    rep (w, 1, SZ(s)) {
        rep (c, 0, w) {
            string tmp = "";
            for (int i = c; i < SZ(s); i += w) {
                tmp += s[i];
            }
            if (tmp == t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

/* B - Vertical Reading 解説 by MtSaka */
// ありえるすべての c,w を全てシミュレーションし、条件を満たすような c,w が存在するか判定すればよいです。

// for文および文字列の連結操作を用いることである c,w に対する文字列を作ることができます。詳細は実装例をご参照ください。

/* 実装例(C++): */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s, t;
//     cin >> s >> t;
//     for (int w = 1; w < (int)s.size(); ++w) {
//         for (int c = 0; c < w; ++c) {
//             string now = "";
//             for (int i = c; i < (int)s.size(); i += w) {
//                 now += s[i];
//             }
//             if (now == t) {
//                 cout << "Yes" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "No" << endl;
// }
