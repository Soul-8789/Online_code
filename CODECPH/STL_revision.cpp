#include<bits/stdc++.h>
using namespace std;

//template<class forwarditerator ,class T >
bool compare(int a,int b)
{
	return a<=b;
}
int main(){
	int n;
	cin>>n;
	cin.get();
	string s[100];
	for(int i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<"\n";
	}

return 0;
}
 
