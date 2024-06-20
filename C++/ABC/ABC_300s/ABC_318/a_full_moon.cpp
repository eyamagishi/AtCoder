/**
    * filename: a_full_moon.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/20/2024 09:00:14
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
    int n, m, p, cnt = 0;
    cin >> n >> m >> p;
    int sum = n - m;
    while (0 <= sum) {
        ++cnt;
        sum -= p;
    }

    cout << cnt << '\n';
    return 0;
}

// A - Full Moon 解説 by nok0

// この問題は while 文、 for 文のような繰り返し文をうまく使えるかを聞いています。
// while 文、for 文に関する情報を知りたい人は APG4b の記事 などを参考にしてみてください。

// この問題では、M 日目、M+P 日目、… の順にその日が N 日目までかを確認し、N 日目までであれば答えに 1 を加算する、
// そうでなければ処理を打ち切ることで答えを求められます。
// これは while 文によって実装できます。以下に C++ での実装例を示します。

/* 実装例(C++)  */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m, p;
//     cin >> n >> m >> p;
//     int res = 0;
//     while(m <= n) {
//         res++;
//         m += p;
//     }
//     cout << res << endl;
// }
