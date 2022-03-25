#include<bits/stdc++.h>
using namespace std;

void reverse(string str)
{
 if(str.length()==0)
 {
 	return ;
 }	 
 string ros=str.substr(1);
 reverse(ros);
 cout<< str[0];
}
void replacepi(string str)
{
	if(str.length()==0)
	{
		return ;
	}
	if(str[0]=='p'&& str[1]=='i')
	{
		cout<<"3.14";
		replacepi(str.substr(2));
	}
	else
	{
		cout<<str[0];
		replacepi(str.substr(1));
	}
}
void Toi(int n,char src,char des, char hel)
{
	if(n==0)
	{
		return;
	}

	Toi(n-1,src,hel,des);
	cout<<"Move from"<<src<<"to"<< des<<"\n";
	Toi(n-1,hel,des,src);
}

int main()
{
	string s;
	cin>> s;
	//reverse(s);
 // replacepi(s);
	Toi(3,'A','B','C');
	return 0;
}