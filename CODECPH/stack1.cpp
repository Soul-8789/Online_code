#include<bits/stdc++.h>
using namespace std;
#define n1 "\n"
/*
int main()
{
	stack<int> s;  //push() LIFO
	s.push(5);    //pop()
	s.push(10);  //top()
	s.push(15); //size()
	s.push(20);//empty()
	s.push(25);
	s.pop();
	s.pop();
	cout<<s.empty()<<endl;
	s.push(35);
	
	while(!s.empty())
	{
		cout<< s.top()<<" ";
		s.pop();
	}
  cout<< "\n";
    cout<<s.empty()<<"\n";
	return 0;
}


void reverse(string st)
{
	stack<string> s;
	string str="";
for(int i=0;i<st.length();i++)
   {	if(st[i]==' ')
		 {
		 	s.push(str);
		 	str="";
		 }
		 else
		 	str +=st[i];
	}
	s.push(str);
	int i;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	//cout<<s[0]<<" ";

}
int main()
{
	string s;
	getline(cin,s);

	reverse(s);
	return 0;
}
*/
void printstackelement(stack<char>s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
string remove(string s){
	int n=s.size(),i=0;
   stack<char> c;
   
   while(i<n)
   {
   	if(c.empty()|| c.top()!=s[i])
   	{
   		c.push(s[i]);
   	}
   
   	
   	else{
   		c.pop();
   	}
   	i++;
   }
   string ans="";
   while(!c.empty())
	{
		char ele=c.top();
		c.pop();
		ans +=ele;
	}

	reverse(ans.begin(),ans.end());
	return ans;

}
bool validpara(string s)
{
	
	int n=s.size(),i=0;
   stack<char> c;
   
   while(i<n)
   {
   	if(c.empty())
   	{
   		c.push(s[i]);
   	}

   else if((c.top()=='('&& s[i]==')' )||(c.top()=='['&& s[i]==']' )||(c.top()=='{'&& s[i]=='}' ))
   	{
   		c.pop();
   	}
   	else{
   		c.push(s[i]);
   	}
   	i++;
   }
  if (c.size()==0)
  	return true;
  else
  	return false;

}
string removedup(string s,int k)
{
	vector<pair<char,int> > st;
	for(auto c:s)
	{
		if(st.size()==0 || st.back().first !=c)
		{
			st.push_back({c,1});
		}
		else
		{
			st.back().second++;
		}
		if(st.back().second==k)
		{
			st.pop_back();
		}
	}
	string res;
	for( auto x:st)
	{
		res.append(x.second,x.first);
	}
	return res;
}
int main()
{
  string s;
  int k;
  cin>> s;
 cout<< validpara(s);
return 0;
}