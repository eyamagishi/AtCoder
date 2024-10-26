/**
 * filename: b.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/26/2024 21:03:11
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

    string s[8];
    rep (i, 0, 8) cin >> s[i];
    vector<vector<bool>> flg(8, vector<bool>(8, false));
    rep (y, 0, 8) {
        rep (x, 0, 8) {
            if (s[y][x] == '#') {
                rep (i, 0, 8) {
                    flg.at(i).at(x) = true;
                    flg.at(y).at(i) = true;
                }
            }
        }
    }

    int cnt = 0;
    rep (y, 0, 8) {
        rep (x, 0, 8) {
            if(!flg.at(y).at(x)) {
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}

/* B - Avoid Rook Attack 解説 by MMNMM */
/* 1. マスごとに取られないか判定する */
// #include <array>
// #include <iostream>

// using namespace std;

// // マス (i, j) にコマを置くことができるか判定する
// bool check_square(const array<array<bool, 8>, 8> &board, int i, int j) {
//     for (int k = 0; k < 8; k++) {
//         // すでに同じ行にコマが置かれていたら、コマを置くことはできない
//         if (board[i][k]) {
//             return false;
//         }
//     }
//     for (int k = 0; k < 8; k++) {
//         // すでに同じ列にコマが置かれていたら、コマを置くことはできない
//         if (board[k][j]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     array<array<bool, 8>, 8> board;
//     for (int i = 0; i < 8; i++) {
//         for (int j = 0; j < 8; j++) {
//             char c;
//             cin >> c;
//             board[i][j] = c == '#';
//         }
//     }

//     int ans = 0;

//     // それぞれのマスについて、
//     for (int i = 0; i < 8; i++) {
//         for (int j = 0; j < 8; j++) {
//             // コマが置けるなら答えを 1 増やす
//             if (check_square(board, i, j)) {
//                 ans++;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }

/* 2. コマごとに取れるマスを計算する */
// #include <algorithm>
// #include <array>
// #include <iostream>
// #include <ranges>

// using namespace std;

// int main() {
//     array<array<bool, 8>, 8> board;
//     for (int i = 0; i < 8; i++) {
//         for (int j = 0; j < 8; j++) {
//             char c;
//             cin >> c;
//             board[i][j] = c == '#';
//         }
//     }

//     // 置くことができるマスを求める
//     array<array<bool, 8>, 8> safe{};
//     // はじめすべて true で初期化
//     ranges::fill(safe | views::join, true);

//     for (int i = 0; i < 8; i++) {
//         for (int j = 0; j < 8; j++) {
//             // コマが置かれていたら、
//             if (board[i][j] == 1) {
//                 // 同じ行のマスに置くことはできない
//                 for (int k = 0; k < 8; k++) {
//                     safe[i][k] = false;
//                 }
//                 // 同じ列のマスに置くことはできない
//                 for (int k = 0; k < 8; k++) {
//                     safe[k][j] = false;
//                 }
//             }
//         }
//     }

//     // 置くことができるマスの合計を出力
//     cout << ranges::count(safe | views::join, true) << endl;
//     return 0;
// }
