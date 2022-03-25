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
vi nextgreaterright(vi arr,int n)
{
	vi r;
	stack <int>s;
	for(int i=n-1;i>=0;i--)
	{
        
        if(s.size()==0)
        {
        	r.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
        	r.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
        	while(s.size()>0 && s.top()<=arr[i])
        	{
        		s.pop();
        	}
        	if(s.size()==0)
        	{
        		r.push_back(-1);
        	}
        	else
        	{
        		r.push_back(s.top());
        	}
        }
        s.push(arr[i]);
	} 
	reverse(r.begin(),r.end());
	return r;
}

int main()
{
	int n;
	cin>> n;
   vi v(n);
   rep(i,0,n)
   {
   	cin>> v[i];
   }
  /*
   vector<int> res=nextgreaterright(v,n);
   for(auto x : res)
   	cout<< x<<" ";
   */
    vector<int> res=nextgreaterright(v,n);
   for(auto x : res)
   	cout<< x<<" ";
   return 0;


}