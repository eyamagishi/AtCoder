/**
    * filename: a_potions.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/20/2024 18:16:26
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
    int n, h, x;
    cin >> n >> h >> x;
    vi p(n);
    rep (i, 0, n) cin >> p.at(i);

    rep (i, 0, n) {
        if (x <= h + p.at(i)) {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    return 0;
}

/* A - Potions 解説 by  Nyaan */
// この問題は for 文のような繰り返し文をうまく使えるかを聞いている問題です。
// for 文に関する情報を知りたい人は APG4b の記事 などを参考にしてみてください。

// この問題は、H+P i ≥X を満たすような i のうち最小の整数が聞かれています。
// これは配列に P 1 ,P 2 ,…,P N  を格納した後に for 文を利用して配列の要素を 1 個ずつ読み取っていくことで条件を満たす i を発見できます。

/* 実装例 (C++) */
// #include <iostream>
// using namespace std;
// int main() {
//   int N, H, X, P[111];
//   cin >> N >> H >> X;
//   for (int n = 1; n <= N; n++) cin >> P[n];
//   for (int n = 1; n <= N; n++) {
//     if (H + P[n] >= X) {
//       cout << n << endl;
//       break;
//     }
//   }
// }
