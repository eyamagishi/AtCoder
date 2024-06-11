/**
 * filename: b_uppercase_and_lowercase.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/11/2024 09:15:28
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int size = SZ(s), small = 0, large = 0;
    rep(i, 0, size)
    {
        if ('a' <= s[i] && s[i] <= 'z')
            small++;
        else
            large++;
    }

    bool to_small = true;
    if (small < large)
    {
        to_small = false;
    }

    rep(i, 0, size)
    {
        if (to_small)
        {
            if ('A' <= s[i] && s[i] <= 'Z')
            {
                s[i] = s[i] - ('A' - 'a');
            }
        }
        else
        {
            if ('a' <= s[i] && s[i] <= 'z')
            {
                s[i] = s[i] - ('a' - 'A');
            }
        }
    }

    cout << s << '\n';
    return 0;
}

// B - Uppercase and Lowercase 解説 by  Nyaan

// この問題は文字列を処理する能力を問うている問題です。この問題が解けなかった方は文字列を扱う方法を復習してみましょう。
// この問題は次の手順で解くことが出来ます。

// // - S に含まれる小文字の個数と大文字の個数を数え、値の大小に応じて次の操作を行う。
//     - 小文字の個数が大文字の個数より大きい場合は、 S に含まれる大文字を全て小文字に置き換える。
//     - 大文字の個数が小文字の個数より大きい場合は、 S に含まれる小文字を全て大文字に置き換える。

// 主要なプログラミング言語では小文字・大文字に関する専用の関数が用意されています。例えば C++ では次のような関数が存在します。

// islower(c) : c が小文字かどうかを判定する関数
// isupper(c) : c が大文字かどうかを判定する関数
// tolower(c) : c を小文字に変換した文字を返す関数
// toupper(c) : c を大文字に変換した文字を返す関数

// これらの関数を適切に使用することで上記の手順を実装することが出来ます。計算量は O(∣S∣) で十分高速です。

/* 実装例 (C++) */

// #include <cctype>
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string S;
//     cin >> S;

//     int lower = 0, upper = 0;
//     for (auto &c : S)
//     {
//         (islower(c) ? lower : upper)++;
//     }

//     if (lower < upper)
//     {
//         for (auto &c : S)
//         {
//             if (islower(c))
//                 c = toupper(c);
//         }
//     }
//     else
//     {
//         for (auto &c : S)
//         {
//             if (isupper(c))
//                 c = tolower(c);
//         }
//     }

//     cout << S << "\n";
// }
