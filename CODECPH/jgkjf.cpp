#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> pi;
#define F first 
#define S second
 #define PB push_back
 #define MP make_pair

#define REP(i,a,b) for (int i = a; i <=b; i++)




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {

    string s;
    char c;
    cin>> s;
    cin>> c;
    int n=s.length();
    
    if(n==3)
    {
    	if(s[1]==c)
    	{
    		cout<< "yes"<<"\n";
    	}
    	else{
    		cout<< "NO"<<"\n";
    	}
    }
    else if(n==5)
    {
    	if(s[2]==c)
    	{
    		cout<< "yes"<<"\n";
    	}
    	else{
    		cout<< "NO"<<"\n";
    	}
    }
     else if
     {
     	for(int i=1;i<n;i++)
     	{
     		if(s.find(c))
     		{
     		
                  cout<< "YES"<<"\n";
                   break;
              }

     	    else
     			{
     				cout<< "NO"<<"\n";
     				break;
     			}
     	}

     }
     else
     {
     	cout<<"No"<<"\n";
     }
 }
    return 0;
}