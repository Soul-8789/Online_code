#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setbits(x) builtin_popcount(x)

const int N=1e5+2, Mod = 1e9+7;
vi adj[N];
signed main()
{
	/*
	int n,m;
	cin>> n>>m;
	
	vvi adjm(n+1,vi(n+1,0));
	rep(i,0,n)
	{
		int x,y;
		cin>>x>>y;
		adjm[x][y]=1;
		adjm[y][x]=1;
	}
	cout<<"adjancency matrix of above graph is given by: "<<"\n";
	rep(i,1,n+1)
	{
		rep(j,1,m+1)
		{
			cout<<adjm[i][j]<<" ";
		}
		cout<<"\n";
	}
	//check for edge
	if(adjm[1][1]==1)
	{
		cout<< "there is a edge ";
	}
	else 
		{
			cout<< "Not present";
		}
    cout<<endl<<endl;
*/
	int n,m;
	cin>>n>>m;
	rep(i,0,m)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
    
	cout<<"adjancency list are:"<<"\n";
	rep(i,1,n+1)
	{
		cout<<i<<" ";
		 vector<int>::iterator it;
		for(it=adj[i].begin();it!=adj[i].end();it++)
		{
			cout<< (*it)<<" ";
		}
		cout<<endl;
	}

     
	return 0;
 }