/**
    * filename: b_at_coder_janken_2.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/23/2024 18:08:56
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
    int n, sum = 0;
    cin >> n;
    vector<string> name(n);
    rep (i, 0, n) {
        int tmp;
        cin >> name.at(i) >> tmp;
        sum += tmp;
    }

    sort(all(name));
    int mod = sum % n;

    cout << name.at(mod) << '\n';
    return 0;
}
