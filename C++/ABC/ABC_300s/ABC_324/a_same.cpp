/**
    * filename: a_same.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/12/2024 08:56:30
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
    cin >> n;
    vi a(n);
    rep (i, 0, n) cin >> a.at(i);
    rep (i, 0, n) {
        rep (j, 0, n) {
            if (i == j) continue;
            if (a.at(i) != a.at(j)) {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
    return 0;
}
// A - Same 解説 by MMNMM

// 「A 1 ,A 2 ,…,A N  がすべて等しい」ことは、「A のどの 2 つの要素を取り出しても等しい」ことと同値です。
// よって、A をすべて読み込んで、ありえる 2 つのペアすべてについて値が等しいかを判定すればよいです。

/* 実装例:C++ */
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for(int i = 0; i < N; ++i) // A をすべて入力する
//         cin >> A[i];

//     for(int i = 0; i < N; ++i)
//         for(int j = 0; j < N; ++j)
//             if(A[i] != A[j]){ // 違うペアがあったら
//                 cout << "No" << endl; // No と出力して
//                 return 0; // 終了
//             }

//     // 違うペアがなかったら
//     cout << "Yes" << endl; // Yes と出力して
//     return 0; // 終了
// }
