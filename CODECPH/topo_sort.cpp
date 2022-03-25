#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
//#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setbits(x) builtin_popcount(x)

int main()
{
	int n,m,cnt=0;
	cin>>n>>m;
	vector<vector<int> > adj(n);
	vector<int> indeg(n,0);
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>> u>>v;
       adj[u].push_back(v);
       indeg[v]++;
	}
	queue<int> pq;
	for(int i=0;i<n;i++)
	{
		if(indeg[i]==0)
		{
			pq.push(i);
		}
	}
	while(!pq.empty())
	{
		cnt++;
		int x =pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it:adj[x])
        {
        	indeg[it]--;
        	if(indeg[it]==0)
        	pq.push(it);
        }
	}
	return 0;
}