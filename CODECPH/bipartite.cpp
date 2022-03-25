#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
int n,m;
vector<vector<int> > adj;
vector<int> col;
bool bipart;
void color(int u,int curr)
{
	if(col[u]!=-1 && col[u] !=curr)
	{
		bipart=false;
		return;
	}
	col[u]=curr;
	if (vis[u])
	{
		return;
	}
	vis[u]=true;
	for(auto i :adj[u])
	{
		color(i,curr ^ 1);

	}

}

int32_t main()
{
	bipart=true;
  cin>> n>> m;
  adj=vector< vector<int> >(n);
  vis=vector<bool> (n,false);
  vector<int> col(n,-1);
  for(int i=0;i<m;i++)
  {
     int u,v;
     cin>> u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
  }
  for(int i=0;i<n;i++)
  {
  	if(!vis[i])
  	{
  		color(i,0);
  	} 
  }
 if(bipart)
 {
 	cout<<"bipartite graph";
 }
else 
	cout<< "NO";

 return 0; 
 }