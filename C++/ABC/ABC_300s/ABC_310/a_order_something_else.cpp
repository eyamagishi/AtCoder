/**
 * filename: a_order_something_else.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/02/2024 09:22:49
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
    int n, p, q;
    cin >> n >> p >> q;
    int cost = p;
    rep (i, 0, n) {
        int d;
        cin >> d;
        cost = min(cost, d + q);
    }
    cout << cost << '\n';

    return 0;
}

/* A - Order Something Else 解説 by leaf1415 */

// もし割引券を使うのであれば、もっとも安い料理を注文するのが最適です。よって、もっとも安い料理の価格を D min​  円とすると、

// 割引券を使わない場合の支払額 P 円と、割引券を使ってもっとも安い料理を注文する場合の支払額 Q+D min​  円のうち、
// より安い方の金額 min{P,Q+D min​ } を出力すれば本問題に正解できます。

// もっとも安い料理の価格 D min​  を求めるには、すべての料理 1,2,…,N を順に調べてそれらの価格を比較する必要があります。
//  「料理 1,2,…,N を順に調べ」ることの実装には、
//  プログラミング言語の標準的な機能である 繰り返し の機能（ for 文など）を用いることができます。

/* 以下に、C++ 言語による本問題の正解例を記載します。 */
// #include <iostream>
// using namespace std;

// int main(void)
// {
//   int n, p, q;
//   cin >> n >> p >> q;
  
//   int d_min = 1000000000, d;
//   for(int i = 1; i <= n; i++){
//     cin >> d;
//     d_min = min(d, d_min);
//   }
//   cout << min(p, q+d_min) << endl;
  
//   return 0;
// }    
