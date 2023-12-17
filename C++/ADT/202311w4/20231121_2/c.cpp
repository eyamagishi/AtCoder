// AC 3:54
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if(s[i] == 'o' && cnt < k) cnt++;
    else s[i] = 'x';
  }

  cout << s << endl;
}

// C - Qual B 解説 by physics0523
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n,k;
//   string s;
//   cin >> n >> k >> s;
//   for(auto &nx : s){
//     if(nx=='o'){
//       if(k<=0){nx='x';}
//       k--;
//     }
//   }
//   cout << s << "\n";
//   return 0;
// }
