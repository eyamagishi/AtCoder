/**
    * filename: a_scoreboard.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/07/2024 08:08:52
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
    int n, takahashi = 0, aoki = 0;
    cin >> n;
    rep (i, 0, n) {
        int x, y;
        cin >> x >> y;
        takahashi += x;
        aoki += y;
    }

    if (takahashi > aoki) {
        cout << "Takahashi" << endl;
    } else if (takahashi < aoki) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}

// A - Scoreboard 解説 by MMNMM

// チーム高橋が獲得したポイントの合計と、チーム青木が獲得したポイントの合計を計算して、大小関係に従って答えを出力すればよいです。
// 実装例は以下のようになります。

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int TakahashiScore = 0; // チーム高橋の合計得点
//     int AokiScore = 0; // チーム青木の合計得点
//     for (int i = 0; i < N; ++i) {
//         int X, Y;
//         cin >> X >> Y;

//         // それぞれのチームに得点をプラスする
//         TakahashiScore += X;
//         AokiScore += Y;
//     }

//     // 合計得点の大小に従って結果を出力
//     if (TakahashiScore > AokiScore)
//         cout << "Takahashi" << endl;
//     else if (TakahashiScore > AokiScore)
//         cout << "Aoki" << endl;
//     else
//         cout << "Draw" << endl;
    
//     return 0;
// }
