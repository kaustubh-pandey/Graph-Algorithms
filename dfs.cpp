#include<bits/stdc++.h>
using namespace std;
//using stack
void DFS(vector<int> G[],int n){
  bool visited[n];
  memset(visited,false,sizeof(visited[0])*n);
  stack<int> st;
  st.push(0);
  while(!st.empty()){
    int curr_node = st.top();
    st.pop();
    if(!visited[curr_node]){
        cout<< curr_node <<" ";
        visited[curr_node] = true;
        for(int i=G[curr_node].size()-1;i>=0;i--){
          if(!visited[G[curr_node][i]]){
            st.push(G[curr_node][i]); 
          }
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
  DFS(G,n);
}