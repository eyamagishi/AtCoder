/**
    * filename: b_which_is_ahead.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/13/2024 20:03:19
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
    vi P(n);
    rep (i, 0, n) cin >> P.at(i);
    vi Q(n + 1);
    rep (i, 0, n) Q.at(P.at(i)) = i;
    int q;
    cin >> q;
    rep (i, 0, q) {
        int a, b;
        cin >> a >> b;
        if(Q[a] < Q[b]) {
            cout << a << '\n';
        } else {
            cout << b << '\n';
        }
    }

    return 0;
}

// B - Which is ahead? 解説 by nok0

// 人 i は前から Q i  番目に並んでいるという情報を表す配列 Q を作成します。すると、クエリは 
// Q A i と Q B i   の大小の比較となり、簡単に行うことが出来ます。
// Q の作成方法ですが、各 i について Q P i =i とすればよいです。
// 以下に、C++ 言語による正解例を記載します。

/* 実装例 */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> P(n);
//     for(int i = 0; i < n; i++) cin >> P[i];
//     vector<int> Q(n + 1);
//     for(int i = 0; i < n; i++) Q[P[i]] = i;
//     int q;
//     cin >> q;
//     for(int i = 0; i < q; i++) {
//         int a, b;
//         cin >> a >> b;
//         if(Q[a] < Q[b])
//             cout << a << endl;
//         else
//             cout << b << endl;
//     }
// }
