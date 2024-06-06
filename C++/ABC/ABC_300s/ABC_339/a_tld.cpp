/**
    * filename: a_tld.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/06/2024 09:04:35
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
    string s;
    cin >> s;
    int s_size = SZ(s);
    string ans = "";
    rep (i, 0, s_size) {
        if (s[i] == '.') ans = "";
        else {
            ans += s[i];
        }
    }

    cout << ans << endl;
    return 0;
}

// A - TLD 解説 by physics0523

// あなたが用いている言語で文字列 (やそれに相当する配列等) を取り扱う方法を今一度確認した上で実装しましょう。
// この問題は以下の 2 ステップで正解することができます。

// 1. 文字列中、最も後ろにある . を探す。
// 2. 最も後ろにある . よりも後ろにある文字列を出力する。

// これらは、どちらもいくつかの変数と for ループを用いて実現可能です。
// また、今回の問題では文字列の長さを取得する方法を知っておくとより楽に実装ができます。

// 実装例 (C++):
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   string s;
//   cin >> s;
//   int l=s.size(),ldot=0;
//   for(int i=0;i<l;i++){
//     if(s[i]=='.'){ldot=i;}
//   }
//   for(int i=ldot+1;i<l;i++){
//     cout << s[i];
//   }
//   cout << "\n";
//   return 0;
// }
