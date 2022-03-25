#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
	int n;
	cin>> n;
	while(n--)
	{
		long long x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3; 
		long long d= (x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
		if(d <0)
			cout<<"RIGHT"<<"\n";
		else if(d > 0)
		{
			cout<< "LEFT"<< "\n";
		}
		else
			cout<< "TOUCH"<< "\n";
	}
return 0;
}
int main()
{
    string s1,s2;
    cin>> s1>>s2;
    if(s1.length()!=s2.length())
    {
        cout<< "NO";
        return 0;
    }
    reverse(s2.begin(),s2.end());
    if(s1==s2)
    {
        cout<<"YES";
    }
    else
    cout<< "NO";
return 0;
}

int main()
{
	int n;
	cin>> n;
	for(int i=1;i<=n;i++)
	{
      if(i%2!=0){
      	cout<< "i hate";
      }
      else
      	cout<<"i love";

      if(i!=n)
      {
      	cout<< " that ";
      }
	}
	cout<< " it";
	return 0;
}

int main()
{
   int n;
   cin>> n;
   string s;
   cin>> s;
   int cnt1=0,cnt2=0;
   for(int i=0;i<s.size();i++)
   {
   	if(s[i]=='n')
   		cnt1++;
   	else if(s[i]=='z')
   		cnt2++;
   }
   for(int i=0;i<cnt1;i++)
   {
   	cout<< "1 ";
   }
   for(int i=0;i<cnt2;i++)
   {
   	cout<<"0 ";
   }
   return 0;
}
*/
int main()
{
	vector<int > v;
	int x;
	while(cin>> x);
	{
		v.push_back(x);
	}
   int y=v[0];
   cout<< x<<"\n";
	for(int i=v.size()-1;i>=0;i--)
	{
		if(v[i]==42) break;
		else
			cout<< v[i]<<"\n";
	}
	return 0;
}