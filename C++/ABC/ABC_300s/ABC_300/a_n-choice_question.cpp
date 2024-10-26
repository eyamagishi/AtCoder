/**
 * filename: a_n-choice_question.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/26/2024 19:48:14
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
    int n, a, b;
    cin >> n >> a >> b;
    int ans;
    rep (i, 0, n) {
        int c;
        cin >> c;
        if (c == a + b) ans = i + 1;
    }

    cout << ans << '\n';
    return 0;
}

/* A - N-choice question 解説 by physics0523 */
/* 実装例(C++): */
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   int n,a,b;
//   cin >> n >> a >> b;
//   vector<int> c(n);
//   for(auto &nx : c){cin >> nx;}
//   int ans;
//   for(int i=0;i<n;i++){
//     if(a+b == c[i]){ans=i+1;break;}
//   }
//   cout << ans << "\n";
//   return 0;
// }
