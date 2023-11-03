#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string ans;
  cin >> n;
  int n1000 = n/1000,
      n100 = n%1000/100,
      n10 = n%100/10,
      n1 = n%10;
  if(n1000 != n100 && n1000 != n10) {ans = "No";}
  else if(n100 != n10 && n100 != n1) {ans = "No";}
  else {ans = "Yes";}
  cout << ans << endl;
  return 0;
}