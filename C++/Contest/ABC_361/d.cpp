/**
 * filename: d.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/06/2024 21:34:47
 * result: 未提出
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
    int n, s_b = 0, t_b = 0, same = 0;
    string s, t;
    cin >> n >> s >> t;
    rep (i, 0, n) {
        if (s[i] == 'B') {
            ++s_b;
        }
        if (t[i] == 'B') {
            ++t_b;
        }
        if (s[i] == t[i]) {
            ++same;
        }
    }
    if (s_b == t_b) {
        int cnt = 0;
        rep (i, 0, n) {
            while (s[i] != t[i]) {
                ++cnt;
                char tmp = s[i];
                s.erase(i, 1);
                s += tmp;
            }
        }
        cout << cnt << '\n';
    } else {
        cout << -1 << '\n';
    }
    return 0;
}

/* D - Go Stone Puzzle 解説 by kyopro_friends */
// S と T に含まれる W, B の個数が一致しない場合答えは No です。以下では一致する場合を考えます。
// W の個数を W、B の個数を B とします。空きマスは必ず連続した位置にあることに注意すると、
// マスの状態としてあり得るものは B!W!(N+1)!​ =O( N​ 2 N ) 通りです。（計算量解析はやや難しいため証明略）
// これは N=14,B=W=7 のときに最大の 51480 となります。
// また、各状態に対し、次の一手としてありえるものは N−1 通りです。状態数、次の一手の数がともに十分小さいため、
// この問題はBFSにより解くことができます。

// 計算量は全体で(hashmapを用いることでexpected) O(N 1.5 2 N ) となります。