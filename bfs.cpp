#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> G[],int n){
   bool visited[n];
   memset(visited,false,sizeof(visited[0])*n);
   queue<int> q;
   q.push(0);
   while(!q.empty()){
      int curr_node = q.front();
      cout<< curr_node <<" ";
      q.pop();
      if(!visited[curr_node]){
          visited[curr_node] = true;
          for(int x:G[curr_node]){
               if(!visited[x])
                       q.push(x);
          }
      }
   }
   cout<<endl;
}
int main(){
  int n = 5;
  vector<int> G[n];
  G[0].push_back(1);
  G[0].push_back(2);
  G[0].push_back(4);
  G[1].push_back(3);
  G[4].push_back(2);
  BFS(G,n);
}