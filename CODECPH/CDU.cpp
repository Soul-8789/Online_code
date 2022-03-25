#include<bits/stdc++.h>
using namespace std;

#define repd(i,a,b) for (ll i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> vec;
using Graph = vector<vector<ll>>;
const long long INF = 1LL<<60;
const long long MOD = 1000000007;
 

bool iscycle(int src,vector<vector<int>> &adj,vector<bool> &vis,int parent)
{
	vis[src]=true;
	for(auto i:adj[src])
	{
		if(i!=parent)
		{
			if(vis[i])
				return true;
			if(!vis[i] && iscycle(i,adj,vis,src))
				return true;
		}
	}
	return false;
}


int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int> > adj;

	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>> u>> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
   bool cycle=false;
   vector<bool> vis(n,false);
   for(int i=0;i<n;i++)
   {
   	if(!vis[i] && iscycle(i,adj,vis,-1))
   {
     cycle=true;
   }
 }
 if(cycle)
 	cout<<"Cycle is present";
 else 
 	cout<<"Cycle is not present";
}