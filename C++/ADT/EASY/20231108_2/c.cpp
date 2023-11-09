#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);

  int num = 0;
  bool flg = false;
  while(!flg) {
    flg = true;
    for (int i = 0; i < n; i++) {
      if(a.at(i) == num) flg = false;
    }
    if(!flg) num++;
  }
  cout << num << endl;
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// signed main(){
//     ll n;cin>>n;
//     vector<ll>a(n);
//     for(ll i=0;i<=n-1;i++)cin>>a[i];
//     for(ll ans=0;ans<=n;ans++){
//         bool ok=true;
//         for(ll x:a){
//             if(x==ans)ok=false;
//         }
//         if(ok){
//             cout<<ans<<endl;
//             return 0;
//         }
//     }
//     return 0;
// }
