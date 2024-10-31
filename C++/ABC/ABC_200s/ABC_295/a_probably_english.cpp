/**
 * filename: a_probably_english.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/31/2024 18:06:37
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
    int n;
    cin >> n;
    bool flg = false;
    rep (i, 0, n) {
        string w;
        cin >> w;
        if(w == "and" ||
            w == "not" ||
            w == "that" ||
            w == "the" ||
            w == "you") {
            flg = true;
        }
    }

    if (flg) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

/* A - Probably English 解説 by physics0523 */
/* 実装例 (C++): */
// #include<bits/stdc++.h>

// using namespace std;

// vector<string> word={"and", "not", "that", "the", "you"};

// int main(){
//   int n;
//   cin >> n;
//   bool res=false;
//   for(int i=0;i<n;i++){
//     string s;
//     cin >> s;
//     for(auto &nx : word){
//       if(s==nx){res=true;}
//     }
//   }
//   if(res){cout << "Yes\n";}else{cout << "No\n";}
//   return 0;
// }
