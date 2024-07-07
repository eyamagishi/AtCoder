/**
 * filename: b_couples.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/08/2024 08:41:38
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
    cin >> n;
    vi a(2 * n);
    rep (i, 0, 2 * n) cin >> a.at(i);

    int cnt = 0;
    rep (i, 0, 2 * n - 2) {
        if (a.at(i) == a.at(i + 2)) ++cnt;
    }

    cout << cnt << '\n';
    return 0;
}

/* B - Couples 解説 by nok0 */
// 問題文を数式的に解釈すると、A i​ =A i+2​  を満たすような i の個数を数えればいいことが分かります。

// for 文と if 文を用いて、各 i について条件を満たすかを確認しましょう。

/* 実装例(C++): */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<int> a(n * 2);
//   for(auto &v : a) cin >> v;
//   int res = 0;
//   for(int i = 0; i < n * 2 - 2; i++)
//     if(a[i] == a[i + 2]) res++;
//   cout << res << endl;
// }
