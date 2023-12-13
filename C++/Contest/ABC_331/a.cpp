#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D, y, m, d;
  cin >> M >> D >> y >> m >> d;
  if (d + 1 < D) {
    cout << y << ' ' << m << ' ' << d + 1 << endl;
    return 0;
  } else if (m + 1 < M) {
    cout << y << ' ' << m + 1 << ' ' << 1 << endl;
    return 0;
  } else {
    cout << y + 1 << ' ' << 1 << ' ' << 1 << endl;
    return 0;
  }
}

// A - Tomorrow 解説 by kyopro_friends
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int M, D, y, m, d;
//   cin >> M >> D >> y >> m >> d;
//   if(m==M && d==D){
//     cout << y+1 << ' ' << 1 << ' ' << 1 << endl;
//   }else if(d==D){
//     cout << y << ' ' << m+1 << ' ' << 1 << endl;
//   }else{
//     cout << y << ' ' << m << ' ' << d+1 << endl;
//   }
// }
