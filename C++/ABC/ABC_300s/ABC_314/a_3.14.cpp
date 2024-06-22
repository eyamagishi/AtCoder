/**
 * filename: a_3.14.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/22/2024 12:43:54
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

const string pai = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << pai[0] << pai[1];
    rep (i, 0, n) cout << pai[i + 2];
    cout << '\n';

    return 0;
}

/* A - 3.14 解説 by MMNMM */
// 文字列 "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679" の先頭 N+2 文字を出力すればよいです。
// これは、N+2 回だけループを回すことで実現できます。

// 「文字列 S の先頭 k 文字を取った文字列」を作る方法が存在する言語ではその関数を使うことでもこの問題を解くことができます（C++ では std::string::substr 関数を、Python ではスライスを使うとよいです）。
// 実装例は以下のようになります。 C++ と Python でループを使う実装例とループを使わない実装例を載せます。

/* C++ */
// #include <string>
// #include <iostream>

// using namespace std;

// int main() {
//     string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

//     int N;
//     cin >> N;

//     for (int i = 0; i < N + 2; ++i) // 先頭 N + 2 文字を出力する
//         cout << pi[i];

//     cout << endl;

//     return 0;
// }
