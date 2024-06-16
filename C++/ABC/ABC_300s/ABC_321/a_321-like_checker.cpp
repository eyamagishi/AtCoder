/**
 * filename: a_321-like_checker.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/16/2024 16:58:14
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, now = -1;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 <= now)
        {
            cout << "No\n";
            return 0;
        }
        now = n % 10;
        n /= 10;
    }

    cout << "Yes\n";
    return 0;
}

// A - 321-like Checker 解説 by physics0523

// 何らかの方法で N を文字列として受け取れば、その文字列 i 文字目が N の上から i 桁目になります。
// なので、その文字列を使って判定を行うと N を各桁に分解する必要がなくなります。

/* 実装例 (C++): */

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   string s;
//   cin >> s;
//   for(int i=1;i<s.size();i++){
//     if(s[i-1]<=s[i]){
//       cout << "No\n";
//       return 0;
//     }
//   }
//   cout << "Yes\n";
//   return 0;
// }
