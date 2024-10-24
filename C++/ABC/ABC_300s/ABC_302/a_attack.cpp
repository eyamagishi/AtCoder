/**
 * filename: a_attack.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/24/2024 09:06:22
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
    ll a, b;
    cin >> a >> b;
    ll cnt = a / b;
    if (a % b != 0) ++cnt;

    cout << cnt << '\n';
    return 0;
}

/* A - Attack 解説 by  PCTprobability */
/* 実装例(C++) */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   long long a,b;
//   cin>>a>>b;
//   cout<<(a+b-1)/b<<endl;
// }

/* 実装例(Python) */
// A, B = map(int, input().split())
// print((A + B - 1) // B)
