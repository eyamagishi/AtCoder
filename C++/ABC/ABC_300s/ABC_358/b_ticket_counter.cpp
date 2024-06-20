/**
    * filename: b_ticket_counter.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/20/2024 10:47:01
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
    int n, a;
    cin >> n >> a;
    vi t(n);
    rep (i, 0, n) cin >> t.at(i);

    int time = t.at(0) + a;
    cout << time << '\n';
    rep (i, 1, n) {
        if (t.at(i) < time) {
            time += a;
        } else {
            time = t.at(i) + a;
        }
        cout << time << '\n';
    }

    return 0;
}

// B - Ticket Counter 解説 by yuto1115
// i 番目の人がチケットを購入し終わるのが今から x i  秒後だとします。また、便宜上 x 0 =0 とおきます。
// 各 i (1≤i≤N) について、xi  の値が x i−1  の値を用いてどのように表されるか考えます。

// ・x i−1 ≤T i  のとき：i 番目の人がチケット売り場を訪れたタイミングで列は存在しないので、すぐさま購入手続きを開始できます。よって、x i =T i +A です。
// ・x i−1 >T i  のとき：i 番目の人がチケット売り場を訪れたタイミングではまだ前の人たちがチケットを購入しているので、i 番目の人は i−1 番目の人が購入を終了し次第購入手続きを開始します。よって、x i =x i−1 +A です。

// これらをまとめると x i =max(x i−1 ,T i )+A となります。よって、この式を用いて i=1,2,…,N の順に x i  の値を求めていけばよいです。

/* 実装例 (C++) : */

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n, a;
//     cin >> n >> a;
//     int pre = 0;
//     for (int i = 0; i < n; i++) {
//         int t;
//         cin >> t;
//         int ans = max(pre, t) + a;
//         cout << ans << '\n';
//         pre = ans;
//     }
// }
