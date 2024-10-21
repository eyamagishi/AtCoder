/**
 * filename: b_traveling_takahashi_problem.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/21/2024 19:16:18
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
    cout << fixed << setprecision(7);
    int n;
    cin >> n;
    double x = 0, y = 0, cost = 0;
    rep (i, 0, n) {
        double  tmp_x, tmp_y;
        cin >> tmp_x >> tmp_y;
        cost += sqrt(pow(tmp_x - x, 2) + pow(tmp_y - y, 2));
        x = tmp_x;
        y = tmp_y;
    }
    cost += sqrt(pow(x, 2) + pow(y, 2));
    cout << cost << '\n';

    return 0;
}
