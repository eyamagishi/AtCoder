#include<bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long int b;
  cin >> b;
  for(int a = 1; a < 16; a++) {
    long long int x = 1;
    for (int i = 0; i < a; i++) {x *= a;}
    if(x == b) {
      cout << a << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
