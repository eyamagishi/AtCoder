#include<iostream>
using namespace std;

int main(){
  string S;
  int a = -1;
  cin >> S;
  for(int i=0;i < S.size();i++){
    if(S[i] == 'a'){
      a = i+1;
    }
  }
  cout << a << endl;
  return 0;
}