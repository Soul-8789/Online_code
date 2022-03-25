#include<bits/stdc++.h>
using namespace std;

template<typename T>
class graph{

	map<T,list<T> > l;//=new list[v]

public:
	
	void addedge(int x,int y){
		l[x].push_back(y);
		
		l[y].push_back(x);	
	}
	void dfs_helper(T src,map<T,bool>&visited)
	{
		cout<< src<<" ";
		visited[src]=true;
		for(T nbr :l[src])
		{
			if(!visited[nbr])
			{
				dfs_helper(nbr,visited);
			}
		}
	}
	void dfs ()
	{
		map<T ,bool>visited;
		//mark all them not visited
		for(auto p : l)
		{
			T node = p.first;
			visited[node]=false;
		}
		//iterate over all the vertex
		int cnt=0;
		for(auto p:l)
		{
			T node =p.first;
			
			if(!visited[node])
			{
               cout<<"Component :"<<cnt<<" -->";

               dfs_helper(node,visited);
	           cnt++;
	           cout<<endl;
			}
		}
		
	}
	
};
int main()
{
	graph <int> g;
    g.addedge(0,1);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(0,3);
	g.addedge(0,4);
	g.addedge(5,6);
	g.addedge(6,7);
	g.addedge(8,8);

	g.dfs();
 
//	g.printadjlist();

return 0;
}