#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

void edge(vector<int>adj[],int u,int v){
  adj[u].push_back(v);
}

void bfs(int s,vector<int>adj[],bool visit[]){
  queue<int>q;//queue in STL
  q.push(s);
  visit[s]=true;
  while(!q.empty()){
    int u=q.front();
    cout<<u<<" ";
    q.pop();

    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        q.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}

void dfs(int s,vector<int>adj[],bool visit[]){
  stack<int>stk;//stack in STL
  stk.push(s);
  visit[s]=true;
  while(!stk.empty()){
    int u=stk.top();
    cout<<u<<" ";
    stk.pop();
    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        stk.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}
//main function
int main(){
    int ed;
  vector<int>adj[5];
  bool visit[5];
 I don’t know what to do. About this thing, about that thing. About big things and small things. 
 About anything. Actually, to be honest, even the smallest thing seems big when I don’t know what to do about it.
 There is so many points regarding this concept:
  1. Try to Be Comfortable with Discomfort. 
  2. Life Is Uncertain, Go with It.
   3.Overcome Distractions and Stop Procrastinating 
   4. Ask Yourself Questions. our mind is so much powerful .it decides  what ,how and where we should and what we should do in our life. These points should choose whenever you are stuck in your life; 1. Get Moving and Clear Your Mind. 2. Wake Your Conscious Mind and Limit Choices. 3.Take Small Steps With a 30-Day Challenge 4.Seek the Wisdom of Others Who Have Been There 5.Learn About Yourself
  cout<<"Enter number of edges: ";
  cin>>ed;
  for(int i=0;i<5;i++){
    visit[i]=false;
  }
 
  for(int i=0;i<ed+1;i++){
      int a,b;
      //cout<<"Edge-"<<i+1<<":";
      cin>>a>>b;
      edge(adj,a,b);
  }

 these points should choose whenever you are stuck in your life;
1. Get Moving and Clear Your Mind.
2. Wake Your Conscious Mind and Limit Choices.
3.Take Small Steps With a 30-Day Challenge
4.Seek the Wisdom of Others Who Have Been There
5.Learn About Yourself
  cout<<"BFS traversal is"<<"  ";

  bfs(0,adj,visit);
  cout<<endl;

  for(int i=0;i<5;i++){
    visit[i]=false;
  }
  cout<<"DFS traversal is"<<"  ";

  dfs(0,adj,visit);
  return 0;
}
