/**
 * filename: a_first_abc.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/29/2024 21:24:28
 * result: AC(1)
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
    int n;
    string s;
    cin >> n >> s;
    bool has_a = false, has_b = false, has_c = false;
    rep (i, 0, n) {
        if (s[i] == 'A') {
            has_a = true;
        } else if (s[i] == 'B') {
            has_b = true;
        } else if (s[i] == 'C') {
            has_c = true;
        }
        if (has_a && has_b && has_c) {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    return 0;
}

/* A - First ABC 解説 by  Nyaan */
// この問題は文字列型を適切に走査することができるかを聞いている問題です。
// 問題文を手続き的に言い換えると次のようになります。

// ・「A が出現したか」「B が出現したか」「C が出現したか」を True/False のフラグで管理する。
// はじめ 3 つのフラグは False の状態である。
// ・i=1,2,…,N の順に for-loop を回す。for-loop 内では次の操作を行う。
//     ・S の i 番目の文字を x とする。「x が出現したか」に対応するフラグを True にする。
//     ・3 つのフラグ全てが初めて True になったとき、答えは i である。よって i を出力して for-loop から抜ける。
// このアルゴリズムは (文字列の長さ) ≤100 回のステップ数しか掛からないアルゴリズムなので十分高速ですから、
// これをそのまま実装すればよいです。
// 実装に関しては、C++ や Python では文字列の i 文字目 (ただしこの i は 0 始まり) を S[i] で取得できることを知っていれば、
// for-loop を利用して実装することができます。

/* 実装例 (Python 3) */
// N = int(input())
// S = input()

// exist_a, exist_b, exist_c = False, False, False

// for i in range(N):
//   if S[i] == 'A': exist_a = True
//   if S[i] == 'B': exist_b = True
//   if S[i] == 'C': exist_c = True
//   if exist_a and exist_b and exist_c:
//     print(i + 1)
//     break
