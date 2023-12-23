#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = 1;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      for (int k = 0; k <= j; k++) {
        if(cnt != n) {
          cnt++;
          continue;
        } else {
          long i_sum = 0, j_sum = 0, k_sum = 0;
          for (int i_index = 0; i_index <= i; i_index++) {
            long i_tmp = 1;
            for (int i_index_index = 0; i_index_index < i_index; i_index_index++) i_tmp *= 10;
            i_sum += i_tmp;
          }
          for (int j_index = 0; j_index <= j; j_index++)  {
            long j_tmp = 1;
            for (int j_index_index = 0; j_index_index < j_index; j_index_index++) j_tmp *= 10;
            j_sum += j_tmp;
          }
          for (int k_index = 0; k_index <= k; k_index++)  {
            long k_tmp = 1;
            for (int k_index_index = 0; k_index_index < k_index; k_index_index++) k_tmp *= 10;
            i_sum += k_tmp;
          }
          cout << i_sum + j_sum + k_sum << endl;
          return 0;
        }
      }
    }
  }
}
