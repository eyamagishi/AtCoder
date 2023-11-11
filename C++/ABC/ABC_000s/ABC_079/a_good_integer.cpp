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
  ans = "No";
  if((n1000 == n100 && n1000 == n10) || (n100 == n10 && n10 == n1)) ans = "Yes";

  cout << ans << endl;
  return 0;
}
