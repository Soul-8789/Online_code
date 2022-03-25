#include<bits/stdc++.h>
using namespace std;
//make -> new node
//find-> parent of group
//union-> a,b
//size->
//path compression
//TC: O(A(n))

const int N =1e5+10;
int size[N];
int parent[N];
void make(int v)
{
parent[v]=v;
size[v]=1;
}
int find(int v)
{
if(v==parent[v])
 return v;
return parent[v]=find(parent[v]);
}
void Union(int a,int b)
{
a=find(a);
b=find(b);
if(a != b)
{
	if(size[a]<size[b])
	{
		swap(a,b);
	}
	parent[b]=a;
   size[a]+=size[b];
    
}

}
int main()
{
// city and flood
	int n,k;
    cin>> n>> k;
    for(int i=1;i<=n;i++)
    {
    	make(i);
    }
    while(k--)
    {
    	int u,v;
    	cin>> u>>v;
    	Union(u,v);
    }
    int connected_comp=0;
    for(int i=1;i<=n;++i)
    {
    	if(find(i)==i)
    		connected_comp++;
    }
    cout<< connected_comp<<"\n";
return 0;
}