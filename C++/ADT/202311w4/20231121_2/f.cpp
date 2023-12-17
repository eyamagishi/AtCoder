// 未提出
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long cnt = 0;
  for (int i = 1; i < n + 1; i++) {
    if(n < i * i * i) break;
    for (int j = i; j < n + 1; j++) {
      if(n < i * j * j) break;
      for (int k = j; k < n + 1; k++) {
        if (n < i * j * k) break;
        else cnt++;
      }
    }
  }

  cout << cnt << endl;
}

// F - ABC conjecture 解説 by kyopro_friends
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   long long n,cnt=0;
//   cin >> n;
//   for(long long a=1;a*a*a<=n;a++){
//     for(long long b=a;a*b*b<=n;b++){
//       long long uc;
//       for(long long c=max(b,(n/(a*b))-5);;c++){
//         if(a*b*c<=n){uc=c;}else{break;}
//       }
//       //cerr << a << ' ' << b << ' ' << uc << '\n';
//       cnt+=(uc-b+1);
//     }
//   }
//   cout << cnt << '\n';
//   return 0;
// }
