/**
 * filename: c.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/06/2024 21:15:22
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
    int n, k;
    ll diff_min = 0;
    cin >> n >> k;
    int diff = n - k - 1;
    vll a(n);
    rep (i, 0, n) {
        cin >> a.at(i);
        diff_min += a.at(i);
    }
    sort(all(a));
    rep (i, 0, n - diff) {
        diff_min = min(diff_min, a.at(i + diff) - a.at(i));
    }

    cout << diff_min << '\n';
    return 0;
}

/* C - Make Them Narrow 解説 by physics0523 */
// A の要素のうち K 個消すという操作は、 A の要素のうち N−K 個残して B とすると言い換えられます。
// このもとで、 ( B の最小値 ) となる要素をひとつ決め打つことを考えてみましょう。
// これを A x​  とします。( B の最大値 ) − ( B の最小値 ) をなるべく小さくするには、
// A の要素であって A x​  以上のものを小さい方から N−K 個残すのが最善です。
// このことは、 A を昇順にソートして連続する N−K 個を残すのが最善であると言い換えることができます。
// このもとで、以下の解法が成立します。

// まず、 A 1​ ≤A 2​ ≤⋯≤A N​  を満たすように A をソートする。
// このとき、 A l+(N−K)−1​ −A l​  のうち 1≤l≤K+1 での最小値が答えである。Al​  を ( B の最小値 ) と決め打って、
// 連続する N−K 個の要素を残す場合に対応します。
// これは、ソートと for ループを用いることで実装できます。全体で時間計算量 O(NlogN) です。

/* 実装例 (C++): */
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   int n,k;
//   cin >> n >> k;
//   vector<int> a(n);
//   for(auto &nx : a){cin >> nx;}

//   sort(a.begin(),a.end());
//   int res=2e9;
//   for(int i=0;i<=k;i++){
//     res=min(res,a[i+(n-k)-1]-a[i]);
//   }
//   cout << res << "\n";
//   return 0;
// }
