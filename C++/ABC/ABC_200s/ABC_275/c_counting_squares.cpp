#include<iostream>
using namespace std;
/*
この問題は様々な解法が考えられますが、適当に実装すると同じ正方形を二回数えてしまうといった問題が起こることがあります。

ここでは実装方針の一例を紹介します。

まず、正方形を列挙する必要があります。これは、正方形の頂点のうち 1 個を決めうち、
次にその頂点を端点とする辺のうち片方を決め打つことで可能です。
（なお、実装例では辺を反時計周りに向き付けし、決め打った頂点から次の頂点に向かう辺を探索しています。）

次に、正方形を重複して数えない方法を説明します。これには例えば std::set を用いて、正方形を集合として管理すれば良いです。

また、std::set が不要な方法もあります。先ほどの解法で何回同じ正方形を重複して数えているかを考えて、
重複している回数で割ることによって答えを求めることができます。
実装によって何回重複しているかは変化するので、気をつけてください。
（実装例では、辺の向きを固定してるので同じ正方形をどの頂点を最初に選択したかで 4 回カウントしています。）
*/
int main(){
  int r,c;
  string S;
  return 0;
}