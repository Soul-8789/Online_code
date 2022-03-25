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
vector<vector<int> > cc;
vector<int>current_cc;


void dfs(int vertex)
{
     //take action on vertex after entering 
	//the vertex
	//if(vis[vertex]) return;
	//cout<<vertex<<endl;
	vis[vertex]=true;
	current_cc.push_back(vertex);
//time complexity: O(v+e)
	for(int child:adjl[vertex])
	{
		//cout<<"parent"<<vertex<<"child"<<child<<endl;
			if(vis[child]) continue;
		//take action on child before entering 
	//the chlid node

		dfs(child);
		//take action on vertex after existing  
	//the child node
	}
	//take action on vertex before existing
	//the vertex

}

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
/*    //find connected component
	int cnt =0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]) continue;
		dfs(i);
		cnt++;
	}
 cout<< cnt<<"\n";
*/
	int cnt =0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]) continue;
	    current_cc.clear();

		dfs(i);
		cc.push_back(current_cc);
		cnt++;
	}
 cout<< cc.size()<<"\n";
 for(auto c_cc :cc)
 {
 	for(int vertex:c_cc)
 	{
 		cout<<vertex<<" ";
 	}
 	cout<<endl;
 }

return 0;
}