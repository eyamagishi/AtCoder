/**
 * filename: a_long_loong.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/10/2024 08:46:40
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
    int n;
    cin >> n;
    cout << 'L';
    rep(i, 0, n) cout << 'o';
    cout << "ng\n";

    return 0;
}

// A - Long Loong 解説 by mechanicalpenciI
// 問題文の指示通り、1 個の L, N 個の o, 1 個の n, 1 個の g をこの順に出力すれば良いです。
// これは標準出力および for 文を用いて行う事ができます。
// これらの文字を直接出力するか、先に文字列を構成してその文字列を出力するかで大きく分けて 2 通りの方針が考えられますが、
// どちらの場合でも実装量などは大差ありませんので、今回はどちらでも良いでしょう。

// 出力時に余計な改行などが含まれる事がないように注意しましょう。

/* c++ による実装例 */
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     string s = "L";
//     for (int i = 0; i < n; i++)
//         s += "o";
//     s += "ng";
//     cout << s << endl;
//     return 0;
// }
