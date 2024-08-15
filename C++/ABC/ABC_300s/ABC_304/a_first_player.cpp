/**
 * filename: a_first_player.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/16/2024 09:21:38
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
    int n, min_index;
    ll min_a = 1000000010;
    cin >> n;
    vs s(n);
    vll a(n);
    rep (i, 0, n) {
        cin >> s.at(i) >> a.at(i);
        if (a.at(i) < min_a) {
            min_a = a.at(i);
            min_index = i;
        }
    }

    rep (i, 0, n) {
        int index = (i + min_index) % n;
        cout << s.at(index) << '\n';
    }

    return 0;
}

// A - First Player 解説 by leaf1415
// #include <iostream>
// #include <utility>
// using namespace std;

// int main(void)
// {
//   int n, a[100];
//   string s[100];
  
//   cin >> n;
//   for(int i = 0; i < n; i++) cin >> s[i] >> a[i];
  
//   pair<int, int> m = {a[0], 0};
//   for(int i = 1; i < n; i++) m = min(m, {a[i], i});
//   int p = m.second;
  
//   for(int i = 0; i < n; i++) cout << s[(p+i)%n] << endl;
  
//   return 0;
// }
