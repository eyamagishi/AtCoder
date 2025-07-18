/**
 * filename: a_pairing.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 05/01/2025 11:47:49
 * result: 
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
    int a_i[4] = {0, 0, 0, 0};
    rep(i, 0, 4) {
        int tmp;
        cin >> tmp;
        a_i[tmp-1]++;
    }

    int cnt = 0;
    rep(i, 0, 4) cnt += a_i[i] / 2;

    cout << cnt << endl;

    return 0;
}
