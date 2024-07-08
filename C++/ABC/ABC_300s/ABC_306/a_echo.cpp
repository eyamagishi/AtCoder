/**
 * filename: a_echo.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/09/2024 08:02:07
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
    int n;
    string s;
    cin >> n >> s;
    rep (i, 0, n) {
        cout << s[i] << s[i];
    }

    cout << '\n';
    return 0;
}

/* A - Echo 解説 by physics0523 */
// 出力すべき文字列を変数として作った上でそれを出力しても構いませんが、競技プログラミングにおいては出力が正しければよいので、
// 以下手順で少しサボった実装でもこの問題に正解できます。

// ・S の文字をひとつずつ for ループで着目し、その文字を 2 度出力する。
// 但し、出力の際過剰な空白や改行等が入らないように注意する必要があります。

/* 実装例(C++): */
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   int n;
//   string s;
//   cin >> n >> s;
//   for(int i=0;i<n;i++){
//     cout << s[i] << s[i];
//   }cout << "\n";
//   return 0;
// }
