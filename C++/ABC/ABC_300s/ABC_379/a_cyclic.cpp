/**
 * filename: a_cyclic.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 11/12/2024 22:00:36
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

    string n;
    cin >> n;

    cout << n[1] << n[2] << n[0] << ' ';
    cout << n[2] << n[0] << n[1] << '\n';

    return 0;
}
