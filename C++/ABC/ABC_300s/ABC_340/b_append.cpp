/**
 * filename: b_append.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/09/2024 08:22:20
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
    int q;
    cin >> q;
    vi data;
    rep (i, 0, q) {
        int order, num;
        cin >> order >> num;
        if (order == 1) {
            data.pb(num);
        } else {
            num;
            cout << data.at(SZ(data) - num) << '\n';
        }
    }

    return 0;
}

/* B - Append 解説 by kyopro_friends */
// C++では、vector A の末尾に要素 x を追加することは A.push_back(x) ででき、
// vector A の末尾から x 番目の要素の値を得ることは A[A.size()-x] によりできます。

/* 実装例 */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int Q;
//   cin >> Q;
//   vector<int>A;
//   for(int i=0;i<Q;i++){
//     int t,x;
//     cin >> t >> x;
//     if(t==1){
//       A.push_back(x);
//     }else{
//       cout << A[A.size()-x] << endl;
//     }
//   }
// }
