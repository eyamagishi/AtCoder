#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  vector<long> a_sum(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> A.at(i);
    for (int j = 0; j < i; j++) {
      if (A.at(j) < A.at(i)) a_sum.at(j) += A.at(i);
      if (A.at(i) < A.at(j)) a_sum.at(i) += A.at(j);
    }
  }

  for (int i = 0; i < n; i++) {
    if (i != 0) cout << ' ';
    cout << a_sum.at(i);
  }
  cout << endl;
}

// C - Sum of Numbers Greater Than Me 解説 by kyopro_friends
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n;
//   cin >> n;
//   vector<int>a(n);
//   for(int i=0;i<n;i++)cin >> a[i];

//   map<int,vector<int>>d;
//   for(int i=0;i<n;i++)d[a[i]].push_back(i);

//   long long s=accumulate(a.begin(),a.end(),0LL);
//   vector<long long>ans(n);
//   for(auto[v,i_list]:d){
//     s-=(long long)v*i_list.size();
//     for(auto i:i_list)ans[i]=s;
//   }

//   for(auto x:ans)cout << x << ' ';
// }
