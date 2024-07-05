/**
 * filename: a_new_scheme.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/05/2024 09:12:54
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
    int keep = 0;
    string ans = "Yes";
    rep (i, 0, 8) {
        int s;
        cin >> s;
        if (s % 25 == 0 && 100 <= s && s <= 675 & keep <= s) {
            keep = s;
        } else {
            ans = "No";
        }
    }

    cout << ans << '\n';
    return 0;
}

/* A - New Scheme 解説 by yuto1115 */
// for 文と if 文を用いて、問題文に書かれた条件が満たされているかどうかを判定すれば良いです。
// 詳しい実装方法は下記の実装例を参考にしてください。

/* 実装例 (C++) : */
// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     vector<int> s(8);
//     for (int &i: s) cin >> i;
//     for (int i = 0; i < 8; i++) {
//         if (i < 7 and s[i] > s[i + 1]) {
//             cout << "No" << endl;
//             return 0;
//         }
//         if (s[i] < 100 or s[i] > 675 or s[i] % 25 != 0) {
//             cout << "No" << endl;
//             return 0;
//         }
//     }
//     cout << "Yes" << endl;
// }
