// 未提出
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[m], b[m];
  for(int i = 0; i< m; i++) {cin >> a[i];}
  for(int i = 0; i< m; i++) {cin >> b[i];}

  int x[n] = {};
  for(int i = 0; i < m; i++) {
    if(a[i] == b[i]) {
      cout << "No" << endl;
      return 0;
    } else {
      int num = a[i];
    }
  }
}
