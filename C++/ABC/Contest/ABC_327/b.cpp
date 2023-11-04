// WA: (6)
#include<bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long int b;
  cin >> b;
  unsigned int num = 1;
  while(true) {
    unsigned long long int N = pow(num, num);
    if(b == N) {
      cout << num << endl;
      return 0;
    } else if(b < N || N == 0) {
      cout << -1 << endl;
      return 0;
    }
    num++;
  }
}
