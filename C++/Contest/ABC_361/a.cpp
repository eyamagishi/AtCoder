/**
 * filename: a.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/06/2024 20:53:17
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
    int n, k, x;
    cin >> n >> k >> x;
    vi a(n);
    rep (i, 0, n) cin >> a.at(i);
    rep (i, 0, n) {
        if (i != 0) cout << ' ';
        cout << a.at(i);
        if (i == k - 1) cout << ' ' << x;
    }

    cout << '\n';
    return 0;

}

/* A - Insert 解説 by physics0523 */
// 実は、この問題では出力の見た目さえ整えてしまえば実際に数列 B をプログラム内で構成する必要も
// 数列 A をプログラム内で保持する必要もありません。
// 具体的には、数列 A の各要素を受け取りながら受け取ったものをそのまま出力し、 
// K 要素目を出力した直後に X を追加で出力し、その後数列 A の残りの部分の受け取りと出力を続ければよいです。

/* 実装例 (C++): */
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   int n,k,x;
//   cin >> n >> k >> x;
//   for(int i=0;i<n;i++){
//     int a;
//     cin >> a;
//     if(i!=0){cout << " ";}
//     cout << a;
//     if(i==(k-1)){
//       cout << " " << x;
//     }
//   }cout << "\n";
//   return 0;
// }
