/**
    * filename: a_welcome_to_at_coder_land.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/17/2024 08:55:46
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
    string s, t;
    cin >> s >> t;
    if (s == "AtCoder" && t == "Land") {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}

// A - Welcome to AtCoder Land 解説 by yuto1115

// 2 つの文字列を入力として受け取ったのち、問題文で指示されている通りに条件分岐を行って答えを出力すれば良いです。
// 条件分岐の際に必要な条件式では、文字列の一致比較および 2 つの条件の論理積を取る必要があります。
// これらを具体的に実現する方法については、下記の実装例 (C++, Python) 等を参考にしてください。

/* 実装例 (C++) : */
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     string s, t;
//     cin >> s >> t;
//     if (s == "AtCoder" && t == "Land") {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }
