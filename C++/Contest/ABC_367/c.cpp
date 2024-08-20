/**
 * filename: c.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/17/2024 20:59:10
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

int n, k, r_size;
vi r, ans; 

int roop_sum(int index, int sum) {
    if (index == n) {
        if (sum % k == 0) {
            rep (i, 0, n) {
                if (i != 0) cout << ' ';
                cout << ans.at(i);
            }
            cout << '\n';
        }

        return 0;
    }

    rep (i, 0, r.at(index)) {
        ans.pb(i + 1);
        roop_sum(index + 1, sum + i + 1);
        ans.pop_back();
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    rep (i, 0, n) {
        int tmp;
        cin >> tmp;
        r.pb(tmp);
    }

    roop_sum(0, 0);

    return 0;
}

/* C - Enumerate Sequences 解説 by physics0523 */
/* 方針1. 再帰を使って列挙する */
// #include<bits/stdc++.h>

// using namespace std;

// int n,k;
// int r[8];
// int seq[8];

// void solve(int lv){
//   if(lv==n){
//     int s=0;
//     for(int i=0;i<n;i++){ s+=seq[i]; }
//     if(s%k==0){
//       for(int i=0;i<n;i++){
//         if(i){cout << " ";}
//         cout << seq[i];
//       }cout << "\n";
//     }
//     return;
//   }
//   for(int i=1;i<=r[lv];i++){
//     seq[lv]=i;
//     solve(lv+1);
//   }
// }

// int main(){
//   cin >> n >> k;
//   for(int i=0;i<n;i++){
//     cin >> r[i];
//   }
//   solve(0);
//   return 0;
// }

/* 方針2. 数列に対応する整数をデコードする */
// #include<bits/stdc++.h>

// using namespace std;

// int n,k;
// int r[8];
// int seq[8];

// int main(){
//   cin >> n >> k;
//   int tot=1;
//   for(int i=0;i<n;i++){
//     cin >> r[i];
//     tot*=r[i];
//   }
//   for(int t=0;t<tot;t++){
//     int x=t;
//     int s=0;
//     for(int i=n-1;i>=0;i--){
//       seq[i]=(x%r[i])+1;
//       s+=seq[i];
//       x/=r[i];
//     }
//     if(s%k==0){
//       for(int i=0;i<n;i++){
//         if(i){cout << " ";}
//         cout << seq[i];
//       }cout << "\n";
//     }
//   }
//   return 0;
// }
