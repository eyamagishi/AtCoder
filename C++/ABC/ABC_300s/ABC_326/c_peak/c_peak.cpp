#include<bits/stdc++.h>
using namespace std;

int max_peak(int A[], int N, int M){
  int max=0;
  int right=0;
  for(int left=0;left < N;left++) {
    while(A[right] < A[left] + M) {
      if(N <= right) {break;}
      right++;
    }
    if(max < right-left) {max = right-left;}
  }
  return max;
}

int main() {
  int N;
  int M;
  cin >> N >> M;
  int A[N];
  for(int i=0;i < N;i++) {cin >> A[i];}
  // 昇順にソート
  sort(A, A+N);
  int max = max_peak(A, N, M);
  cout << max << endl;
  return 0;
}

// unsigned int を使用したが上手くいかなかった。なぜだろう。
