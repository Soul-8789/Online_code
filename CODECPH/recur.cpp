#include<bits/stdc++.h>
using namespace std;


int TOH(int n,int first,int third,int second)
 {
   int count=0;
  if(n>0){

     count=TOH(n-1, first, second, third);
     cout<<first<<" "<<third<<"\n";
     count++;
     count+= TOH(n-1, second, third, first);
     }
  return abs(count-1);
 }
string removedu(string s)
{
if(s.length()==0)
{
	return "";
}	
char ch=s[0];
string ans=removedu(s.substr(1));
if(ch==ans[0])
{
	return ans;
}
return (ch+ans);

} 
string moveallx(string s)
{
	if(s.length()==0)
	{
		return "";
	}
	char ch=s[0];
	string ans=moveallx(s.substr(1));
	if(ch=='x')
	{
return ans+ch;
	}
return ch+ans;
}
/* 
void generatesub(string str,string ans)
{
	if(str.length()==0)
	{
		cout<< ans<< endl;
		return ;
	}
	char ch=str[0];
	string ros=str.substr(1);
	generatesub(ros,ans);
	generatesub(ros,ans+ch);
}
*/

void generatesub(string str,string ans)
{
	if(str.length()==0)
	{
		cout<< ans<< endl;
		return ;
	}
	char ch=str[0];
	int code=ch;
	string ros=str.substr(1);
	generatesub(ros,ans);
	generatesub(ros,ans+ch);
	generatesub(ros,ans+to_string(code));
}



 int main()
 {
 	//int n;
 	//cin>>n;
 	string s;
 	cin>> s;
 	generatesub("AB","");

 	//cout<<moveallx(str);	//cout<< TOH(n,1,2,3);
  return 0;
 }