/**
    * filename: b_delimiter.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/06/2024 12:34:26
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
    int tmp;
    vi a;
    while(cin >> tmp) {
        a.pb(tmp);
        if (tmp == 0) break;
    }

    int size = SZ(a);
    rep (i, 0, size) {
        cout << a.at(size - 1 - i) << '\n';
    }

    return 0;
}

// B - Delimiter 解説 by physics0523

// この問題で行うべきことは以下の 2 つです。

// ・0 が来るまで Ai を読み込み続ける
// ・Ai を逆順に出力する

// 例えば、 1 つ目は While 文を、2 つ目はループ変数を減らしていく for 文によって実現できます。

// 実装例(C++):
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   vector<int> a;
//   while(true){
//     int ca;
//     cin >> ca;
//     a.push_back(ca);
//     if(ca==0){break;}
//   }
//   for(int i=a.size()-1;i>=0;i--){
//     cout << a[i] << "\n";
//   }
//   return 0;
// }
