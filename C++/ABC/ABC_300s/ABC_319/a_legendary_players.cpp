/**
    * filename: a_legendary_players.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/19/2024 08:04:07
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

map<string, int> rating = {
    {"tourist", 3858},
    {"ksun48", 3679},
    {"Benq", 3658},
    {"Um_nik", 3648},
    {"apiad", 3638},
    {"Stonefeang", 3630},
    {"ecnerwala", 3613},
    {"mnbvmar", 3555},
    {"newbiedmy", 3516},
    {"semiexp", 3481}
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string key;
    cin >> key;
    cout << rating[key] << '\n';

    return 0;
}

// A - Legendary Players 解説 by MMNMM
// この問題は、入力がそれぞれのユーザーネームのどれに等しいかを判定し、
// 対応するレーティングを出力することで解くことができます（実は、それぞれのユーザーネームは先頭の文字を見るだけで区別することもできます）。

// 例えば、次のような実装方針で解くことができます。

// ・条件分岐を用いる方法
//     ・実装例：C++, Haskell
// ・連想配列を用いる方法
//     ・実装例：Python
// ・文字列置換を用いる方法
//     ・実装例：sed

/* C++ */
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;
    
//     if (s == "tourist")
//         cout << 3858 << endl;
//     if (s == "ksun48")
//         cout << 3679 << endl;
//     if (s == "Benq")
//         cout << 3658 << endl;
//     if (s == "Um_nik")
//         cout << 3648 << endl;
//     if (s == "apiad")
//         cout << 3638 << endl;
//     if (s == "Stonefeang")
//         cout << 3630 << endl;
//     if (s == "ecnerwala")
//         cout << 3613 << endl;
//     if (s == "mnbvmar")
//         cout << 3555 << endl;
//     if (s == "newbiedmy")
//         cout << 3516 << endl;
//     if (s == "semiexp")
//         cout << 3481 << endl;
    
//     return 0;
// }
