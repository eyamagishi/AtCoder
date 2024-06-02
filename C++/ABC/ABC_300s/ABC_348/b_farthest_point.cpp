/**
    * filename: b_farthest_point.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/24/2024 08:45:41
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
    vector<double> x(n), y(n);
    rep (i, 0, n) cin >> x.at(i) >> y.at(i);

    rep (i, 0, n) {
        double max = -1;
        int max_idx = -1;
        rep (j, 0, n) {
            if (i == j) continue;
            double tmp = sqrt(pow((x.at(j) - x.at(i)), 2) + pow((y.at(j) - y.at(i)), 2));
            if (max < tmp) {
                max = tmp;
                max_idx = j + 1;
            }
        }
        cout << max_idx << '\n';
    }

    return 0;
}
