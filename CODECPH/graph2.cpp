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

const int N=1e5+2, Mod = 1e9+7;
bool vis[N];
vi adjl[N];
int main()
{
	for(int i=0;i<N;i++)
	{
		vis[i]=0;
	}
	int n,m;
	cin >> n >> m;
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>> x>>y;
		adjl[x].push_back(y);
		adjl[y].push_back(x);
	}
     queue<int> q;
     q.push(1);
     vis[1]=true;
     while(!q.empty())
     {
     	int node =q.front();
     	q.pop();
     	cout<< node<<"\n";

     	vector<int> :: iterator it;
     	for(it=adjl[node].begin();it!=adjl[node].end();it++)
     	{
     		if(!vis[*it])
     		{
     		vis[*it]=1;
     		q.push(*it);	
     		}
     	}
     }

 return 0;
}