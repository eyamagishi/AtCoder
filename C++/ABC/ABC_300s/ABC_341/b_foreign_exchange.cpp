/**
 * filename: b_foreign_exchange.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/14/2024 08:53:36
 * result: 解説AC
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

    ll n;
    cin >> n;
    ll a[n + 1], s[n + 1], t[n + 1];
    rep (i, 1, n + 1) {
        cin >> a[i];
    }
    rep (i, 1, n) {
        cin >> s[i] >> t[i];
    }
    rep (i, 1, n) {
        a[i + 1] += a[i] / s[i] * t[i];
    }
    cout << a[n] << endl;

    return 0;
}

// B - Foreign Exchange 解説 by leaf1415

// i=1,2,…,N−1 の順に「国 i の通貨を可能な限り国 i+1 の通貨に交換する」ことを行えば良いです。
// 行う交換の回数は非常に多くなりうるので、1 回ずつ交換を行うと実行制限時間に間に合いません。
// ですが、国 i の通貨を A i  単位持っているとき、国 i の通貨から国 i+1 の通貨への交換ができる回数は
// ⌊A i /S i ⌋ 回とわかるので、⌊A i /S i ⌋ 回の交換をまとめて行って国 i+1 の通貨が ⌊A i /S i ⌋×T i  単位得られるとして良いです。

// したがって、入力で受け取った A=(A 1 ,A 2 ,…,A N )に対して、 i=1,2,…,N−1 の順に「 A i+1  に ⌊A i /S i ⌋×T i  を加算する」ことを行い、
// 最後に A N  の値を出力すれば、本問題に正解できます。

// 「 i=1,2,…,N−1 の順に」処理を行うには、プログラミング言語の標準的な機能である繰り返しの機能（ for 文など）を用いることができます。
// また、割り算 A i /S i  の結果の小数点以下を切り捨てた値を得るには、使用する言語の割り算等の仕様を把握しておくと良いでしょう。

// 以下に、C++ 言語による本問題の正解例を記載します。
/* 実装例 */
// #include <iostream>
// using namespace std;
// typedef long long ll;

// ll n;
// ll a[200001], s[200001], t[200001];

// int main(void)
// {
//   cin >> n;
//   for(int i = 1; i <= n; i++) cin >> a[i];
//   for(int i = 1; i <= n-1; i++) cin >> s[i] >> t[i];
  
//   for(int i = 1; i <= n-1; i++) a[i+1] += a[i]/s[i] * t[i];
//   cout << a[n] << endl;
  
//   return 0;
// }
