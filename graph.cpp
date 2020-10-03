#include<bits/stdc++.h>
using namespace std;
void addUndirectedEdge(int a,int b,vector<int> G[]){
      G[a].push_back(b);
      G[b].push_back(a);
}
int main(){
   int n = 5;
   vector<int> G[n];
   addUndirectedEdge(0,1,G);
   addUndirectedEdge(0,4,G);
   addUndirectedEdge(1,4,G);
   addUndirectedEdge(3,1,G);
   addUndirectedEdge(3,4,G);
   addUndirectedEdge(1,2,G);
   addUndirectedEdge(2,3,G);
   return 0;
}