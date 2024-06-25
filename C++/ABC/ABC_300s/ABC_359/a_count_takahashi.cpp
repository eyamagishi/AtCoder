/**
 * filename: a_count_takahashi.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/25/2024 12:58:32
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

const string str = "Takahashi"; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, cnt = 0;
    cin >> n;
    rep (i, 0, n) {
        string tmp;
        cin >> tmp;
        if (tmp == str) ++cnt;
    }

    cout << cnt << '\n';
    return 0;
}

/* A - Count Takahashi 解説 by MMNMM */
// この問題は、次のような手順をプログラムすることで解くことができます。

// ・答えとなる整数の変数 ans を作り、値を 0 とする。
// ・標準入力から N を入力する。
// ・次の操作を N 回繰り返す。
//     ・標準入力から文字列を受け取る。
//     ・受け取った文字列が Takahashi と等しければ、ans の値を 1 増やす。
// ・ans の値を出力する。

// for 文による繰り返しや if 文による条件分岐を適切に用いると、この手順を正しくプログラムすることができます。
// 実装例は以下のようになります。

/* C++ での実装例 */
// #include <iostream>

// using namespace std;

// int main() {
//     // Takahashi と等しい個数のカウンタ
//     int ans = 0;

//     int N;
//     cin >> N;

//     for (int i = 0; i < N; i++) {
//         string S;
//         cin >> S;
//         // S が Takahashi と等しかったら、カウンタの値を増やす
//         if (S == "Takahashi") {
//             ans++;
//         }
//     }

//     // カウンタの値を出力
//     cout << ans << endl;

//     return 0;
// }
