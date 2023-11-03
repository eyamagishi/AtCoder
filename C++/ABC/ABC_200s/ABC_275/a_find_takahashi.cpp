#include<iostream>
using namespace std;

int main(){
  int N,i;
  int H[100];
  cin >> N;
  for(i=0;i<N;i++){
    cin >> H[i];
    for(int j = 0;j < i;j++){
      if(H[j]==H[i]){
        cout << "error" <<endl;
        return 1;
      }
    }
  }
  int Max = 0;
  int num = 1;
  for(int j=0;j < i;j++){
    if(Max < H[j]){
      Max = H[j];
      num = j + 1;
      }
  }
  cout << num << endl;
  return 0;
}