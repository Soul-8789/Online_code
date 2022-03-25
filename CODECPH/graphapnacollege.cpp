#include<bits/stdc++.h>
using namespace std;
/* keep on traversing a graph if you are find
an edge pointing to an already vosited node
(except the parent) a cycle is ound*/ 
bool isundirectedcycle(int src,vector<vector<int> > &adj,vector<bool> &visited,int parent)
{
	visited[src]=true;
	for(auto i: adj[src])
	{
		if(i!=parent)
		{
			if(visited[i])
				return true;
			if(!visited[i] && isundirectedcycle(i,adj,visited,src))
				return true;
		}
	}
	return false;
}
bool isdirectedcycle(int src,vector<vector<int> > &adj,vector<bool> &visited,vector<int> &stack)
{
	stack[src]=true;
	if(!visited[src])
	{
		visited[src]=true;
		for(auto i:adj[src])
		{
			if(!visited[i] && isdirectedcycle(i,adj,visited,stack))
			{
				return true;
			}
			if(stack[i])
			{
				return true;
			}
		}
	}
	stack[src]=false;
	return false;

}

int32_t main()
{
   int n,m;
   cin>>n>>m;
   vector< vector<int > > adj(n);
   for(int i=0;i<m;i++)
   {
   	int u,v;
   	cin>> u>> v;
   	adj[u].push_back(v);
   //	adj[v].push_back(u);
   }
   /*
   bool cycle =false;
   vector<bool> visited(n,false);
   for(int i=0;i<n;i++)
   {
   	if(!visited[i] && isundirectedcycle(i,adj,visited,-1))
   	{
   		cycle=true;
   	}
   }
   */
    bool cycle =false;
    vector<int> stack(n,0);
   vector<bool> visited(n,0);
   for(int i=0;i<n;i++)
   {
   	if(!visited[i] && isdirectedcycle(i,adj,visited,stack))
   	{
   		cycle=true;
   	}
   }
   if(cycle)
   	cout<< "Cycle is present";
   else
   	cout<< "Cycle is not present";
   
   return 0;
}