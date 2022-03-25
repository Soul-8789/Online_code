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

int deciwinner(int x,int y)
{
	if((x+y)!=0)
	{
		if(x<y)
			return x;
		else
			return y;
	}
	else
	{
		return max(x,y);
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		if(n==1)
		{
			cout<< "1";
		}
		else {
			vector<int> v;
			int d=pow(2,n);
           for(int i=1;i<=d/2;i++)
            {
                v.push_back(deciwinner(i,i+1));
             }  	

            while(d!=1){
            	if(v.size()==1)
            	{
            		cout<< v[0];
            	}
            	else
            	{
            		for(int i=1;i<=d/2;i++)
            		{
            		v.push_back(deciwinner(v[i],v[i+1]));
            		v.erase(v[i]);
            		v.erase(v[i+1]);
                 	}
                 	d=d/2;
            	}
            }
     cout<<"\n";

	}
	return 0;
}