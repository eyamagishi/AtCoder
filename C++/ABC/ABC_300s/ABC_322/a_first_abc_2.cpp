/**
    * filename: a_first_abc_2.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/14/2024 08:31:27
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
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    rep (i, 0, n - 2) {
        if (s[i] != 'A' || s[i + 1] != 'B' || s[i + 2] != 'C') continue;
        cout << i + 1 << '\n';
        return 0;
    }

    cout << -1 << '\n';
    return 0;
}

// A - First ABC 2 解説 by  Nyaan

// この問題は文字列の扱いと for 文のような繰り返し文の扱いができるかを問うている問題です。
// 問題文を読むと、この問題では次の条件を満たす最小の整数 n が聞かれているとわかります。 (存在しない場合は −1 を出力)

// ・1≤n≤N−2
// ・S の n 文字目は A
// ・S の n+1 文字目は B
// ・S の n+2 文字目は C
// よって、for 文で n を 
// 1,2,…,N−2 まで走査して、各 n について条件を満たすかを判定していけばよいです。
// また、S の n 文字目が何であるかは多くのプログラミング言語では S[n] のような配列添え字演算子を利用すれば取得することができます。

// C++による実装例は次の通りです。
// (実装例を読む際、文字列型の先頭の文字が S[0] で始まる影響で n の値が 1 ずれているのに注意してください。)

/* C++ */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   int N;
//   string S;
//   cin >> N >> S;
//   int ans = -1;
//   for (int i = 0; i < N - 2; i++) {
//     if (S[i] == 'A' and S[i + 1] == 'B' and S[i + 2] == 'C') {
//       ans = i + 1;
//       break;
//     }
//   }
//   cout << ans << endl;
// }
