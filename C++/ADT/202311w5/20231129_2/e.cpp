#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A.at(i);
}

// E - Max MEX 解説 by physics0523
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n,k;
//   cin >> n >> k;
//   set<int> st;
//   for(int i=0;i<n;i++){
//     int a;
//     cin >> a;
//     st.insert(a);
//   }
//   for(int i=0;i<k;i++){
//     if(st.find(i)==st.end()){
//       cout << i << endl;
//       return 0;
//     }
//   }
//   cout << k << endl;
//   return 0;
// }
